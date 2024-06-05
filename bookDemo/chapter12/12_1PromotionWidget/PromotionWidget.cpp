#include "PromotionWidget.h"
#include "ui_PromotionWidget.h"

PromotionWidget::PromotionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PromotionWidget)
{
    ui->setupUi(this);
}

PromotionWidget::~PromotionWidget()
{
    delete ui;
}

void PromotionWidget::on_horizontalSlider_valueChanged(int value)
{
   ui->battery->setPowerLevel(value);
   QString  str=QStringLiteral("当前电量：")+QString::asprintf("%d %%",value);
   ui->LabInfo->setText(str);
}
