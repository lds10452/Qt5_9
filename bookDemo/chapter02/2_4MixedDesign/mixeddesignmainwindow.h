#ifndef MIXEDDESIGNMAINWINDOW_H
#define MIXEDDESIGNMAINWINDOW_H

#include <QMainWindow>
#include    <QLabel>
#include    <QProgressBar>
#include    <QSpinBox>
#include    <QFontComboBox>

namespace Ui {
class MixedDesignMainWindow;
}

class MixedDesignMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MixedDesignMainWindow(QWidget *parent = nullptr);
    ~MixedDesignMainWindow();

private:
    Ui::MixedDesignMainWindow *ui;
private:
    QString     fCurFileName;//当前文件名
    QLabel      *fLabCurFile;//状态栏里显示当前文件的Label
    QProgressBar    *progressBar1;//状态栏上的进度条

    QSpinBox        *spinFontSize;//   字体大写
    QFontComboBox   *comboFont;//字体名称


    void    updateCurFile(QString aFile);//更新当前文件名，并更新状态栏提示
    void    iniUI(); //程序设计的UI初始化
    void    iniSignalSlots(); //手工关联信号与槽
    void    createNew();
private slots:
//UI界面设计生成的槽函数
    void on_actFontBold_triggered(bool checked);  //粗体Action
    void on_actFontItalic_triggered(bool checked); //斜体Action
    void on_actFontUnder_triggered(bool checked);   //下划线Action

    void on_actNew_triggered();//新建文件
    void on_actOpen_triggered();//打开文件

    void on_actFont_triggered();//字体选择对话框

    void on_txtEdit_selectionChanged();  //当前选择的文字发生变化,更新粗体、斜体、下划线3个action的checked状态
    void on_txtEdit_copyAvailable(bool b);//有文字可copy时更新cut,copy的Enable状态

    void on_actToolbarLab_triggered(bool checked); //设置工具栏按钮样式
//  自定义槽函数
    void on_spinBoxFontSize_valueChanged(int aFontSize);//改变字体大小的SpinBox的响应
    void on_comboFont_currentIndexChanged(const QString &arg1);//FontCombobox的响应，选择字体名称

};

#endif // MIXEDDESIGNMAINWINDOW_H
