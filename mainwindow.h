#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "person.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Person *boy;
    Person *girl;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


signals:


private slots:


    void on_boyIncButton_clicked();

    void on_boySpinBox_valueChanged(int arg1);

    void on_girlSpinBox_valueChanged(int arg1);

    void on_girlIncButton_clicked();

    //
    void ui_boy_change();
    void ui_girl_change();

    void on_infoButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
