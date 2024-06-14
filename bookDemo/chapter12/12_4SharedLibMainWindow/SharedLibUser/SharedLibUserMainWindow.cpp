#include "SharedLibUserMainWindow.h"
#include "ui_SharedLibUserMainWindow.h"

#include    "qwdialogpen.h"
#include    <QPainter>

SharedLibUserMainWindow::SharedLibUserMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SharedLibUserMainWindow)
{
    ui->setupUi(this);
}

SharedLibUserMainWindow::~SharedLibUserMainWindow()
{
    delete ui;
}

void SharedLibUserMainWindow::paintEvent(QPaintEvent *event)
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

void SharedLibUserMainWindow::on_action_Pen_triggered()
{//设置Pen
    bool    ok=false;
    QPen    pen;
    pen=QWDialogPen::getPen(mPen,ok);
    if (ok)
    {
        mPen=pen;
        this->repaint();
    }
}
