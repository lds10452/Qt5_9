#ifndef PAINTPATHWIDGET_H
#define PAINTPATHWIDGET_H

#include <QWidget>

namespace Ui {
class PaintPathWidget;
}

class PaintPathWidget : public QWidget
{
    Q_OBJECT

protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    explicit PaintPathWidget(QWidget *parent = nullptr);
    ~PaintPathWidget();

private:
    Ui::PaintPathWidget *ui;
};

#endif // PAINTPATHWIDGET_H
