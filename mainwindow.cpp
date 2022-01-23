#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./task1.h"
#include "./task3.h"
#include <QtMath> // for qSqrt()

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exitButton_clicked()
{
   QApplication::quit();
}


void MainWindow::on_task3Button_clicked()
{
   task3 window;
   window.setModal(true);
   window.exec();
}


void MainWindow::on_task1Button_clicked()
{
   //https://proginfo.ru/quadratic-equation/
    //https://nicknixer.ru/programmirovanie/programma-dlya-resheniya-kvadratnyx-uravnenij-na-c/
    //a, b and c will get using inputboxes or creating new form.
    //or maybe using that table from metodi4ka (better variant, I suppose; no form need)

    task1 window;
    window.setModal(true);
    window.exec();

    double a{}, b{}, c{}, D{}, x1{}, x2{};

    a = 1;
    b = 2;
    c = 1;

    D = b * b - 4 * a * c;

    if (D > 0){
        x1 = ((-b) + qSqrt(D)) / (2 * a);
        x2 = ((-b) - qSqrt(D)) / (2 * a);
        //std::cout x1, x2
    }

    if (D == 0){

        x1 = -(b / (2 * a));
//	    cout << "x1 = x2 = " << x1 << "\n";
    }

    if (D < 0){
//        cout << "D < 0, Действительных корней уравнения не существует";
    }




}

