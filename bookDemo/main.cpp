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

int main(int argc, char *argv[])
{
    //解决汉字乱码问题
//    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
//    QTextCodec::setCodecForLocale(codec); //解决汉字乱码问题
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("China University of Petroleum");

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
    m_pWgt=new GraphicsCoordinateMainWindow;

    m_pWgt->show();

    return a.exec();
}

