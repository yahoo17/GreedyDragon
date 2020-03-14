#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(u8"         酷炫无敌吊炸天——Greedy Dragon");

    w.setWindowIcon( QIcon(":/icon/icon/Dragon.png"));
    w.show();
    return a.exec();
}
