#ifndef SHAREDLIBUSERMAINWINDOW_H
#define SHAREDLIBUSERMAINWINDOW_H

#include <QMainWindow>

#include    <QPen>

QT_BEGIN_NAMESPACE
namespace Ui { class SharedLibUserMainWindow; }
QT_END_NAMESPACE

class SharedLibUserMainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QPen    mPen;

protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    SharedLibUserMainWindow(QWidget *parent = nullptr);
    ~SharedLibUserMainWindow();

private slots:
    void on_action_Pen_triggered();

private:
    Ui::SharedLibUserMainWindow *ui;
};
#endif // SHAREDLIBUSERMAINWINDOW_H
