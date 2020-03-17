#include "mainwindow.h"

#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QPixmap pixmap("C:/Users/DELL/Desktop/gitLB/GreedyDragon/GreedyDragon/icon/Dragon.png");
//    QSplashScreen screen(pixmap);
//    screen.show();
    MainWindow w;
    w.setWindowTitle(u8"         酷炫无敌吊炸天——Greedy Dragon");
    w.setWindowIcon( QIcon(":/icon/icon/Dragon.png"));
    w.show();
//    screen.finish(&w);
    return a.exec();
}
