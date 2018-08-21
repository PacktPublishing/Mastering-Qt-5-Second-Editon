#include "MainWindow.h"

#include <QApplication>
#include <QList>

#include "JobResult.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qRegisterMetaType<JobResult>();
    qRegisterMetaType<QList<JobResult>>();

    MainWindow w;
    w.show();

    return a.exec();
}
