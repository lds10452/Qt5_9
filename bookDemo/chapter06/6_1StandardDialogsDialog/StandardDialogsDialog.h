#ifndef STANDARDDIALOGSDIALOG_H
#define STANDARDDIALOGSDIALOG_H

#include <QDialog>

namespace Ui {
class StandardDialogsDialog;
}

class StandardDialogsDialog : public QDialog
{
    Q_OBJECT

private slots:
    void on_btnOpen_clicked();

    void on_btnClearText_clicked();

    void on_btnOpenMulti_clicked();

    void on_btnSelDir_clicked();

    void on_btnSave_clicked();

    void on_btnColor_clicked();

    void on_btnFont_clicked();

    void on_btnInputString_clicked();

    void on_btnInputInt_clicked();

    void on_btnInputFloat_clicked();

    void on_btnInputItem_clicked();

    void on_btnMsgQuestion_clicked();

    void on_btnMsgInformation_clicked();

    void on_btnMsgWarning_clicked();

    void on_btnMsgCritical_clicked();

    void on_btnMsgAbout_clicked();

    void on_btnMsgAboutQt_clicked();

public:
    explicit StandardDialogsDialog(QWidget *parent = nullptr);
    ~StandardDialogsDialog();

private:
    Ui::StandardDialogsDialog *ui;
};

#endif // STANDARDDIALOGSDIALOG_H
