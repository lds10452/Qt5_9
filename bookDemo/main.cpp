#include <QApplication>
#include "chapter02/2_4MixedDesign/mixeddesignmainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget*m_pWgt=NULL;
    m_pWgt=new MixedDesignMainWindow;//2

    m_pWgt->show();

    return a.exec();
}

