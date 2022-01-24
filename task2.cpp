#include "task2.h"
#include "ui_task2window.h"

task2::task2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::task2)
{
    ui->setupUi(this);
}

task2::~task2()
{
    delete ui;
}

void task2::on_closingButton_clicked()
{
   close();
}


void task2::on_radioButtonIsRad_clicked()
{
   ui->labelMessure->setText("rad");
}


void task2::on_radioButtonIsDegree_clicked()
{
   ui->labelMessure->setText("degree");
}


void task2::on_calculateButton_clicked()
{
   double a {};
   double b { ui->textEditSideB->toPlainText().toDouble() };
   double c { ui->textEditSideC->toPlainText().toDouble() };
   double alpha { ui->textEditAngleVal->toPlainText().toDouble() };

   a = qSqrt(b * b + c * c + 2 * b * c * qCos(alpha));

   ui->labelResult->setText(QString::number(a));

}

