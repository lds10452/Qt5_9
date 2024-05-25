#include "FileSysModelMainWindow.h"
#include "ui_FileSysModelMainWindow.h"

FileSysModelMainWindow::FileSysModelMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileSysModelMainWindow)
{
    ui->setupUi(this);

    model=new QFileSystemModel(this); //QFileSystemModel提供单独线程，推荐使用
    model->setRootPath(QDir::currentPath()); //设置根目录

    ui->treeView->setModel(model); //设置数据模型
    ui->listView->setModel(model); //设置数据模型
    ui->tableView->setModel(model); //设置数据模型

//信号与槽关联，treeView单击时，其目录设置为listView和tableView的根节点
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
            ui->listView,SLOT(setRootIndex(QModelIndex)));

    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
            ui->tableView,SLOT(setRootIndex(QModelIndex)));
}

FileSysModelMainWindow::~FileSysModelMainWindow()
{
    delete ui;
}

void FileSysModelMainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->chkIsDir->setChecked(model->isDir(index));
    ui->LabPath->setText("路径名："+model->filePath(index));
    ui->LabType->setText("节点类型:"+model->type(index));

    ui->LabFileName->setText("文件名："+model->fileName(index));

    int sz=model->size(index)/1024;
    if (sz<1024)
        ui->LabFileSize->setText("文件大小："+QString("%1 KB").arg(sz));
    else
        ui->LabFileSize->setText("文件大小："+QString::asprintf("%.1f MB",sz/1024.0));
}
