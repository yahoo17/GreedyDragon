#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QProcess *process=new QProcess(this);
    QString where ("C:/Users/DELL/Desktop/gitLB/snakeHhh/re/snakeNew.exe");
    process->start(where);

}

void MainWindow::on_pushButton_2_clicked()
{

}
