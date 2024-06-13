#ifndef BATTERYUSERWIDGET_H
#define BATTERYUSERWIDGET_H

#include <QWidget>

namespace Ui {
class BatteryUserWidget;
}

class BatteryUserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BatteryUserWidget(QWidget *parent = nullptr);
    ~BatteryUserWidget();

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_qCustomBattery_powerLevelChanged(int arg1);

private:
    Ui::BatteryUserWidget *ui;
};

#endif // BATTERYUSERWIDGET_H
