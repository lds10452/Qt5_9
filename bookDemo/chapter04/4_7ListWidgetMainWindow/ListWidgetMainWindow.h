#ifndef LISTWIDGETMAINWINDOW_H
#define LISTWIDGETMAINWINDOW_H

#include <QMainWindow>
class QListWidgetItem;

namespace Ui {
class ListWidgetMainWindow;
}

class ListWidgetMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void setActionsForButton();
    void createSelectionPopMenu();

    explicit ListWidgetMainWindow(QWidget *parent = nullptr);
    ~ListWidgetMainWindow();

private slots:
    void on_actListIni_triggered();

    void on_actListInsert_triggered();

    void on_actListDelete_triggered();

    void on_actSelALL_triggered();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

    void on_actListClear_triggered();

    void on_chkBoxListEditable_clicked(bool checked);

    void on_actListAppend_triggered();

    void on_toolBox_currentChanged(int index);

    void on_actSelNone_triggered();//全不选

    void on_actSelInvs_triggered();//反选
private:
    Ui::ListWidgetMainWindow *ui;
};

#endif // LISTWIDGETMAINWINDOW_H
