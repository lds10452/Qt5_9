#ifndef FILESYSMODELMAINWINDOW_H
#define FILESYSMODELMAINWINDOW_H

#include <QMainWindow>
#include    <QFileSystemModel>

namespace Ui {
class FileSysModelMainWindow;
}

class FileSysModelMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QFileSystemModel    *model; //定义数据模型变量
private slots:
    void on_treeView_clicked(const QModelIndex &index);


public:
    explicit FileSysModelMainWindow(QWidget *parent = nullptr);
    ~FileSysModelMainWindow();

private:
    Ui::FileSysModelMainWindow *ui;
};

#endif // FILESYSMODELMAINWINDOW_H
