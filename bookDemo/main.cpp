#include <QApplication>
#include "chapter02/2_4MixedDesign/mixeddesignmainwindow.h"
#include "chapter03/3_1MetaObjectWidget/metaobjectwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget*m_pWgt=NULL;
//    m_pWgt=new MixedDesignMainWindow;//2
    m_pWgt=new MetaObjectWidget;//3

    m_pWgt->show();

    return a.exec();
}

