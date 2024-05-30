#ifndef TEXTFILEMAINWINDOW_H
#define TEXTFILEMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class TextFileMainWindow;
}

class TextFileMainWindow : public QMainWindow
{
    Q_OBJECT

private:
    bool    openTextByIODevice(const QString& aFileName);
    bool    saveTextByIODevice(const QString& aFileName);

    bool    openTextByStream(const QString& aFileName);
    bool    saveTextByStream(const QString& aFileName);

public:
    explicit TextFileMainWindow(QWidget *parent = nullptr);
    ~TextFileMainWindow();

private slots:
    void on_actOpen_IODevice_triggered();

    void on_actOpen_TextStream_triggered();

    void on_actSave_IODevice_triggered();

    void on_actSave_TextStream_triggered();

private:
    Ui::TextFileMainWindow *ui;
};

#endif // TEXTFILEMAINWINDOW_H
