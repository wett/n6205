#ifndef MAINROOT_H
#define MAINROOT_H

#include <QWidget>

#include "dataviewwnd.h"

namespace Ui {
class RootWidget;
}

class MainRoot : public QWidget
{
    Q_OBJECT
    
public:
    explicit MainRoot(QWidget *parent = 0);
    ~MainRoot();
private slots:
    void on_dataViewButton_clicked();

private:
    Ui::RootWidget *ui;

    DataViewWnd *dataViewWnd;
};

#endif // MAINROOT_H
