#ifndef MULTIWINDOWMAINWINDOW_H
#define MULTIWINDOWMAINWINDOW_H

#include <QMainWindow>
#include    "qformdoc.h"
#include    "qformtable.h"

namespace Ui {
class MultiWindowMainWindow;
}

class MultiWindowMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    void    paintEvent(QPaintEvent *event);
public:
    explicit MultiWindowMainWindow(QWidget *parent = nullptr);
    ~MultiWindowMainWindow();
private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_actWidgetInsite_triggered();

    void on_actWindowInsite_triggered();

    void on_actWindow_triggered();

    void on_actWidget_triggered();

    void on_tabWidget_currentChanged(int index);
private:
    Ui::MultiWindowMainWindow *ui;
};

#endif // MULTIWINDOWMAINWINDOW_H
