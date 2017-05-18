#include "mainroot.h"
#include "ui_mainroot.h"

MainRoot::MainRoot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RootWidget)
{
    ui->setupUi(this);
}

MainRoot::~MainRoot()
{
    delete ui;
}

void MainRoot::on_dataViewButton_clicked()
{
    dataViewWnd = new DataViewWnd();
    dataViewWnd->show();
}
