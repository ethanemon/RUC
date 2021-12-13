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



void MainWindow::on_load_clicked()
{
    QString str;
    str = QFileDialog::getOpenFileName(this, "Выбрать файл");
    ui->label->setText(str);
}

