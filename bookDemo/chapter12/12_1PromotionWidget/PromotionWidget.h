﻿#ifndef PROMOTIONWIDGET_H
#define PROMOTIONWIDGET_H

#include <QWidget>

namespace Ui {
class PromotionWidget;
}

class PromotionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PromotionWidget(QWidget *parent = nullptr);
    ~PromotionWidget();

private slots:
   void on_horizontalSlider_valueChanged(int value);

private:
    Ui::PromotionWidget *ui;
};

#endif // PROMOTIONWIDGET_H
