#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    boy=new Person(this,"柴祥",true);
    girl=new Person(this,"紫婷",false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::boy_be_setAge(int age)
{

}

void MainWindow::girl_be_setAge(int age)
{

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

