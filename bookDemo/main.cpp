#include <QApplication>
#include <QTextCodec>
#include "chapter02/2_4MixedDesign/mixeddesignmainwindow.h"
#include "chapter03/3_1MetaObjectWidget/metaobjectwidget.h"
#include "chapter04/4_7ListWidgetMainWindow/ListWidgetMainWindow.h"
#include "chapter04/4_8QTreeWidgetMainWindow/QTreeWidgetMainWindow.h"
#include "chapter04/4_9QTableWidgetMainWindow/QTableWidgetMainWindow.h"
#include "chapter05/5_1FileSysModelMainWindow/FileSysModelMainWindow.h"
#include "chapter05/5_2QStringListModelWidget/QStringListModelWidget.h"
#include "chapter05/5_3QStandardItemModelMainWindow/QStandardItemModelMainWindow.h"
#include "chapter05/5_4CustomDelegateMainWindow/CustomDelegateMainWindow.h"
#include "chapter06/6_1StandardDialogsDialog/StandardDialogsDialog.h"
#include "chapter06/6_2CustomDialogsMainWindow/CustomDialogsMainWindow.h"
#include "chapter06/6_3MultiWindowMainWindow/MultiWindowMainWindow.h"
#include "chapter06/6_4MDIMainWindow/MDIMainWindow.h"
#include "chapter06/6_5SplashDialog/SplashDialog.h"
#include "chapter07/7_1TextFile/TextFileMainWindow.h"
#include "chapter07/7_2BinFile/BinFileMainWindow.h"
#include "chapter07/7_3DirFiles/DirFilesDialog.h"
#include "chapter08/8_1QPainterBasicWidget/QPainterBasicWidget.h"
#include "chapter08/8_2PaintPathWidget/PaintPathWidget.h"
#include "chapter08/8_3ViewportWidget/ViewportWidget.h"
#include "chapter08/8_3PlotWidget/PlotWidget.h"
#include "chapter08/8_4GraphicsCoordinateMainWindow/GraphicsCoordinateMainWindow.h"
#include "chapter08/8_5GraphicsItemDrawManiWindow/GraphicsItemDrawMainWindow.h"

#include "chapter12/12_1PromotionWidget/PromotionWidget.h"

#include "chapter16/16_1MultiLangMainWindow/MultiLangMainWindow.h"
#include "chapter16/16_2StyleMainWindow/StyleMainWindow.h"

#include    <QTranslator>
#include    <QSettings>

QTranslator *trans=NULL;
QString readSetting();

int main(int argc, char *argv[])
{
    //解决汉字乱码问题
//    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
//    QTextCodec::setCodecForLocale(codec); //解决汉字乱码问题
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("China University of Petroleum");

    trans=new QTranslator;
    QString curLang=readSetting(); //读取语言设置
    if (curLang=="EN")
        trans->load("en.qm");
    else
        trans->load("cn.qm");
    a.installTranslator(trans);

    QWidget*m_pWgt=NULL;
//    m_pWgt=new MixedDesignMainWindow;//2
//    m_pWgt=new MetaObjectWidget;//3
//    m_pWgt=new ListWidgetMainWindow;//4
//    m_pWgt=new QTreeWidgetMainWindow;
//    m_pWgt=new QTableWidgetMainWindow;
//    m_pWgt=new FileSysModelMainWindow;//5
//    m_pWgt=new QStringListModelWidget;
//    m_pWgt=new QStandardItemModelMainWindow;
//    m_pWgt=new CustomDelegateMainWindow;
//    m_pWgt=new StandardDialogsDialog;//6
//    m_pWgt=new CustomDialogsMainWindow;
//    m_pWgt=new MultiWindowMainWindow;
//    m_pWgt=new MDIMainWindow;
//    m_pWgt=new SplashDialog;
//    m_pWgt=new TextFileMainWindow;//7
//    m_pWgt=new BinFileMainWindow;
//    m_pWgt=new DirFilesDialog;
//    m_pWgt=new QPainterBasicWidget;//8
//    m_pWgt=new PaintPathWidget;
//    m_pWgt=new PlotWidget;
//    m_pWgt=new ViewportWidget;
//    m_pWgt=new GraphicsCoordinateMainWindow;
//    m_pWgt=new GraphicsItemDrawMainWindow;
//    m_pWgt=new PromotionWidget;//12
//    m_pWgt=new MultiLangMainWindow;//16
    m_pWgt=new StyleMainWindow;

    m_pWgt->show();

    return a.exec();
}

QString readSetting()
{//从注册表读取上次设置的语言
    QString organization="WWB-Qt";//用于注册表，
    QString appName="5_9"; //HKEY_CURRENT_USER/WWB-Qt/amp13_1
    QSettings  settings(organization,appName);//创建
    QString Language=settings.value("Language","EN").toString();//读取 saved键的值
    return  Language;
}
