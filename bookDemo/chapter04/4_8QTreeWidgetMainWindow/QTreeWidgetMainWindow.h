#ifndef QTREEWIDGETMAINWINDOW_H
#define QTREEWIDGETMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class QTreeWidgetMainWindow;
}

class QTreeWidgetMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QTreeWidgetMainWindow(QWidget *parent = nullptr);
    ~QTreeWidgetMainWindow();

private:
    Ui::QTreeWidgetMainWindow *ui;
};

#endif // QTREEWIDGETMAINWINDOW_H
