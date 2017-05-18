#ifndef DATAVIEWFRM_H
#define DATAVIEWFRM_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class DataViewWidget;
}

class DataViewWnd : public QWidget
{
    Q_OBJECT
    
public:
    explicit DataViewWnd(QWidget *parent = 0);
    ~DataViewWnd();


private slots:
    void on_backButton_clicked();

private:
    Ui::DataViewWidget *ui;

};

#endif // DATAVIEWFRM_H
