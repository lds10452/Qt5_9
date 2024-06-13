#include "StaticLibUserMainWindow.h"
#include "ui_StaticLibUserMainWindow.h"
#include    "qwdialogpen.h"
#include    <QPainter>

StaticLibUserMainWindow::StaticLibUserMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StaticLibUserMainWindow)
{
    ui->setupUi(this);
}

StaticLibUserMainWindow::~StaticLibUserMainWindow()
{
    delete ui;
}

void StaticLibUserMainWindow::paintEvent(QPaintEvent *event)
{//绘图
    Q_UNUSED(event);

    QPainter    painter(this);
    QRect rect(0,0,width(),height()); //viewport矩形区
    painter.setViewport(rect);//设置Viewport
    painter.setWindow(0,0,100,50); // 设置窗口大小，逻辑坐标
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);

    painter.setPen(mPen);
    painter.drawRect(10,10,80,30);
}

void StaticLibUserMainWindow::on_action_Pen_triggered()
{//设置Pen
    bool    ok=false;
    QPen    pen=QWDialogPen::getPen(mPen,ok);
    if (ok)
    {
        mPen=pen;
        this->repaint();
    }
}
