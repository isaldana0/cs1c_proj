#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Bulky Club");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_searchSalesReport_clicked()
{

}


void MainWindow::on_pushButton_salesReportMemberTypeDisplay_clicked()
{

}


void MainWindow::on_pushButton_itemSold_clicked()
{

}


void MainWindow::on_pushButton_totalRevenueTax_clicked()
{

}


void MainWindow::on_pushButton_memberShoppingDataSearch_clicked()
{

}


void MainWindow::on_pushButton_memberType_clicked()
{

}

