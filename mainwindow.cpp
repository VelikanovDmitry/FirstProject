#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    _label = new QLabel(this);
    _label.setText("Hello me!!!");

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
