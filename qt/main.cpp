#include "mainwindow.h"
#include <QApplication>

#include <map>
#include <vector>

#include <datatypes.h>
#include <file_io.h>

int main(int argc, char *argv[])
{   
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
