#include "MainWindow.h"
#include <QApplication>

#include "SysInfo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SysInfo::instance().init();
    MainWindow w;
    w.show();
    return a.exec();
}
