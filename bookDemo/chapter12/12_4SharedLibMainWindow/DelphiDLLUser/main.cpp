#include "DelphiDLLUserMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DelphiDLLUserMainWindow w;
    w.show();
    return a.exec();
}
