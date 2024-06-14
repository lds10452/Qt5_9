#include "SharedLibUserMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SharedLibUserMainWindow w;
    w.show();
    return a.exec();
}
