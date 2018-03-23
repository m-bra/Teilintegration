#include "mainwindow.h"
#include <QApplication>
#include <algorithm.h>

#include <map>
#include <vector>

#include <datatypes.h>
#include <file_io.h>

using namespace std;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
