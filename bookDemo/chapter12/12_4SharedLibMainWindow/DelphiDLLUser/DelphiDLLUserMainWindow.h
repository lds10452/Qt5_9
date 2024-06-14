#ifndef DELPHIDLLUSERMAINWINDOW_H
#define DELPHIDLLUSERMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DelphiDLLUserMainWindow; }
QT_END_NAMESPACE

class DelphiDLLUserMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DelphiDLLUserMainWindow(QWidget *parent = nullptr);
    ~DelphiDLLUserMainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DelphiDLLUserMainWindow *ui;
};
#endif // DELPHIDLLUSERMAINWINDOW_H
