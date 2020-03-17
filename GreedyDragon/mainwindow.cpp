#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    Sleep(600);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    GD_SNAKE *snake=new GD_SNAKE();
}

void MainWindow::on_pushButton_2_clicked()
{
    QProcess *process=new QProcess(this);
    QString where ("C:/Users/DELL/Desktop/gitLB/snakeHhh/re/snakeNew.exe");
    QStringList list;
    list<<"1";

    process->start(where,list);

}

void MainWindow::on_pushButton_3_clicked()
{

    qApp->exit();
}
