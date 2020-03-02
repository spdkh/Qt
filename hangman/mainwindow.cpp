#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap b_1("E:/Hangmangui/hangman_pictures/img_536426.png");
    ui->b1->setPixmap(b_1);
    ui->b1->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
