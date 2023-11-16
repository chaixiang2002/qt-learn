#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    boy=new Person(this,"柴祥",true);
    girl=new Person(this,"紫婷",false);

    connect(boy,SIGNAL(age_be_change()),this,SLOT(ui_boy_change()));
    connect(girl,SIGNAL(age_be_change()),this,SLOT(ui_girl_change()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boySpinBox_valueChanged(int arg1)
{
    boy->setAge(arg1);
}

void MainWindow::on_boyIncButton_clicked()
{
    boy->incAge();
}


void MainWindow::on_girlSpinBox_valueChanged(int arg1)
{
    girl->setAge(arg1);
}


void MainWindow::on_girlIncButton_clicked()
{
    girl->incAge();
}

void MainWindow::ui_boy_change()
{
    //spinbox
    ui->boySpinBox->setValue(boy->getAge());
    //pText
    ui->plainTextEdit->appendPlainText(QString("柴祥 年龄被修改为 -> ")+QString::number(boy->getAge()));
}

void MainWindow::ui_girl_change()
{
    //spinbox
    ui->girlSpinBox->setValue(girl->getAge());
    //pText
    ui->plainTextEdit->appendPlainText(QString("紫婷 年龄被修改为 -> ")+QString::number(girl->getAge()));
}


void MainWindow::on_infoButton_clicked()
{
    ui->plainTextEdit->appendPlainText(boy->to_string()+girl->to_string());
}

