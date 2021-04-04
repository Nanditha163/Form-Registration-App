#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QValidator>
#include <QButtonGroup>

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


void MainWindow::on_label_linkActivated(const QString &link)
{
   ui->label->setText("Hello");
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::information(this,"Nanditha","212218104117 SUCCESSFULLY COMPLETED");
}


void MainWindow::on_radioButton_clicked()
{
    QButtonGroup group;
    QList<QRadioButton *>allButtons=ui->label->findChildren<QRadioButton *>();
    qDebug() <<allButtons.size();
    for(int i=0;i<allButtons.size();++i)
    {
        group.addButton(allButtons[i],i);
    }
    qDebug() <<group.checkedId();
    qDebug() <<group.checkedButton();
}

void MainWindow::on_lineEdit_8_returnPressed()
{
    QRegularExpression re("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
           QRegularExpressionMatch match = re.match(ui->lineEdit_3->text());
           bool hasMatch = match.hasMatch();
           if (!hasMatch)
           {
              QMessageBox::information(this,"Nanditha","Invalid entry !");
           }
}


