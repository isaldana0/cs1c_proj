#include "membersearch.h"
#include "ui_membersearch.h"
#include "QLabel"
#include <QMovie>
#include "datawarehouse.h"
#include <QString>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QHeaderView>

memberSearch::memberSearch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::memberSearch)
{
    ui->setupUi(this);
}

memberSearch::~memberSearch()
{
    delete ui;
}

void memberSearch::on_pushButton_memberSearchButton_clicked()
{

}

