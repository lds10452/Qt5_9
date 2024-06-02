#ifndef VIEWPORTWIDGET_H
#define VIEWPORTWIDGET_H

#include <QWidget>

namespace Ui {
class ViewportWidget;
}

class ViewportWidget : public QWidget
{
    Q_OBJECT

protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    explicit ViewportWidget(QWidget *parent = nullptr);
    ~ViewportWidget();

private:
    Ui::ViewportWidget *ui;
};

#endif // VIEWPORTWIDGET_H
