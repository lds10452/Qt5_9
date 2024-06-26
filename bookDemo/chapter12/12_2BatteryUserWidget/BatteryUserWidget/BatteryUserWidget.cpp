﻿#include "BatteryUserWidget.h"
#include "ui_BatteryUserWidget.h"

// 若MSVC 编译版本错误，修改 msvc-version.conf 文件
// 解决MSVC编译时，界面汉字乱码的问题
#if _MSC_VER >= 1600     //MSVC2015>1899,    MSVC_VER= 14.0
#pragma execution_character_set("utf-8")
#endif

BatteryUserWidget::BatteryUserWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BatteryUserWidget)
{
    ui->setupUi(this);
}

BatteryUserWidget::~BatteryUserWidget()
{
    delete ui;
}

void BatteryUserWidget::on_horizontalSlider_valueChanged(int value)
{
    ui->qCustomBattery->setPowerLevel(value);
}

void BatteryUserWidget::on_qCustomBattery_powerLevelChanged(int arg1)
{
//   QString  str=QString::asprintf("当前电量：%d %%",arg1);
   QString  str="当前电量："+QString::asprintf("%d %%",arg1);
//   QString  str=QStringLiteral("当前电量：")+QString::asprintf("%d %%",arg1);
   ui->LabInfo->setText(str);
}
