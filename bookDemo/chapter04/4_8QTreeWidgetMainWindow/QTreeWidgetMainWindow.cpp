#include "QTreeWidgetMainWindow.h"
#include "ui_QTreeWidgetMainWindow.h"

QTreeWidgetMainWindow::QTreeWidgetMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QTreeWidgetMainWindow)
{
    ui->setupUi(this);
}

QTreeWidgetMainWindow::~QTreeWidgetMainWindow()
{
    delete ui;
}
