#include "mainwindow.h"
#include "string"
#include "parents.h"
#include "ingridient.h"
#include "operation.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
