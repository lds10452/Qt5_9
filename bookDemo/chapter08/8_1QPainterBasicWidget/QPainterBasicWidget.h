#ifndef QPAINTERBASICWIDGET_H
#define QPAINTERBASICWIDGET_H

#include <QWidget>

namespace Ui {
class QPainterBasicWidget;
}

class QPainterBasicWidget : public QWidget
{
    Q_OBJECT

private:
    void    myDrawFilledRect();
    void    myDrawTextureRect();
    void    myDrawGradient();

    void    total();

    void    myDrawShape(); //绘制基本图形


protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    explicit QPainterBasicWidget(QWidget *parent = nullptr);
    ~QPainterBasicWidget();

private:
    Ui::QPainterBasicWidget *ui;
};

#endif // QPAINTERBASICWIDGET_H
