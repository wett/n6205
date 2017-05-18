#include <QtGui/QApplication>
#include "mainroot.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainRoot w;
    w.show();
    
    return a.exec();
}
