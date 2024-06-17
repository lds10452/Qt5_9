#ifndef STYLEMAINWINDOW_H
#define STYLEMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class StyleMainWindow;
}

class StyleMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StyleMainWindow(QWidget *parent = nullptr);
    ~StyleMainWindow();

private slots:
    void on_comboSysStyle_currentIndexChanged(const QString &arg1);

    void on_btnNormal_clicked();

    void on_btnFontLarge_clicked();

    void on_btnFontSmall_clicked();

    void on_btnStyleSheet_clicked();

private:
    Ui::StyleMainWindow *ui;
};

#endif // STYLEMAINWINDOW_H
