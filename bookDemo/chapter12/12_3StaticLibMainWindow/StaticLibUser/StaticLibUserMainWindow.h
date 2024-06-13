#ifndef STATICLIBUSERMAINWINDOW_H
#define STATICLIBUSERMAINWINDOW_H

#include <QMainWindow>
#include    <QPen>

QT_BEGIN_NAMESPACE
namespace Ui { class StaticLibUserMainWindow; }
QT_END_NAMESPACE

class StaticLibUserMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QPen    mPen;
protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    StaticLibUserMainWindow(QWidget *parent = nullptr);
    ~StaticLibUserMainWindow();
private slots:
//    void on_pushButton_clicked();

    void on_action_Pen_triggered();

private:
    Ui::StaticLibUserMainWindow *ui;
};
#endif // STATICLIBUSERMAINWINDOW_H
