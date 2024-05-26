#include <QApplication>
#include "chapter02/2_4MixedDesign/mixeddesignmainwindow.h"
#include "chapter03/3_1MetaObjectWidget/metaobjectwidget.h"
#include "chapter04/4_7ListWidgetMainWindow/ListWidgetMainWindow.h"
#include "chapter04/4_8QTreeWidgetMainWindow/QTreeWidgetMainWindow.h"
#include "chapter04/4_9QTableWidgetMainWindow/QTableWidgetMainWindow.h"
#include "chapter05/5_1FileSysModelMainWindow/FileSysModelMainWindow.h"
#include "chapter05/5_2QStringListModelWidget/QStringListModelWidget.h"
#include "chapter05/5_3QStandardItemModelMainWindow/QStandardItemModelMainWindow.h"
#include "chapter05/5_4CustomDelegateMainWindow/CustomDelegateMainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget*m_pWgt=NULL;
//    m_pWgt=new MixedDesignMainWindow;//2
//    m_pWgt=new MetaObjectWidget;//3
//    m_pWgt=new ListWidgetMainWindow;//4
//    m_pWgt=new QTreeWidgetMainWindow;
//    m_pWgt=new QTableWidgetMainWindow;
//    m_pWgt=new FileSysModelMainWindow;//5
//    m_pWgt=new QStringListModelWidget;
//    m_pWgt=new QStandardItemModelMainWindow;
    m_pWgt=new CustomDelegateMainWindow;

    m_pWgt->show();

    return a.exec();
}

