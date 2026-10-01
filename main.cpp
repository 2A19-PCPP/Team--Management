#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("Fusion");   // consistent look on every platform

    MainWindow w;
    w.show();
    return a.exec();
}
