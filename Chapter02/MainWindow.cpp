#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mCpuWidget(this),
    mMemoryWidget(this)
{
    ui->setupUi(this);
    ui->centralWidget->setLayout(new QHBoxLayout());
    ui->centralWidget->layout()->addWidget(&mCpuWidget);
    ui->centralWidget->layout()->addWidget(&mMemoryWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
