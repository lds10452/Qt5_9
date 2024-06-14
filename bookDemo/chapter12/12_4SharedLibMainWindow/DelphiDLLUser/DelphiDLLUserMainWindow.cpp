#include "DelphiDLLUserMainWindow.h"
#include "ui_DelphiDLLUserMainWindow.h"
#include    <QLibrary>
#include    <QMessageBox>

DelphiDLLUserMainWindow::DelphiDLLUserMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DelphiDLLUserMainWindow)
{
    ui->setupUi(this);
}

DelphiDLLUserMainWindow::~DelphiDLLUserMainWindow()
{
    delete ui;
}

void DelphiDLLUserMainWindow::on_pushButton_clicked()
{
    QLibrary myLib("DelphiDLL");

    if (myLib.isLoaded())
        QMessageBox::information(this,"信息","DelphiDLL.DLL已经被载入,第1处");
    typedef int (*FunDef)(int); //函数原定定义
    FunDef myTriple = (FunDef) myLib.resolve("triple"); //解析DLL中的函数
    int V=myTriple(ui->spinInput->value()); //调用函数
    ui->spinOutput->setValue(V);
    if (myLib.isLoaded())
        QMessageBox::information(this,"信息","DelphiDLL.DLL已经被载入,第2处");
}
