#include "dataviewwnd.h"
#include "ui_dataviewwnd.h"

DataViewWnd::DataViewWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataViewWidget)
{
    ui->setupUi(this);

}

DataViewWnd::~DataViewWnd()
{
    delete ui;
}

void DataViewWnd::on_backButton_clicked()
{
   this->close();
}


