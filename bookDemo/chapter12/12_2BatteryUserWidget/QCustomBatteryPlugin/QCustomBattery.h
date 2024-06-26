﻿#ifndef QCUSTOMBATTERY_H
#define QCUSTOMBATTERY_H

#include <QtUiPlugin/QDesignerExportWidget>

#include <QWidget>
#include    <QColor>

class QDESIGNER_WIDGET_EXPORT QCustomBattery : public QWidget
{
    Q_OBJECT
//自定义属性
    Q_PROPERTY(int  powerLevel READ powerLevel WRITE setPowerLevel NOTIFY powerLevelChanged DESIGNABLE true)

private:
    QColor  mColorBack=Qt::white;//背景颜色
    QColor  mColorBorder=Qt::black;//电池边框颜色
    QColor  mColorPower=Qt::green;//电量柱颜色
    QColor  mColorWarning=Qt::red;//电量短缺时的颜色

    int mPowerLevel=60;//电量0-100
    int mWarnLevel=20;//电量低警示阈值
protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    QCustomBattery(QWidget *parent = 0);

    void    setPowerLevel(int pow);//设置当前电量
    int     powerLevel();

    void    setWarnLevel(int warn);//设置电量低阈值
    int     warnLevel();

    QSize   sizeHint();//报告缺省大小

signals:
    void   powerLevelChanged(int );

};

#endif // QCUSTOMBATTERY_H
