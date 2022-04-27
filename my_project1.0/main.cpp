#include<iostream>
#include "my_project.h"
#include <QtWidgets/QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout << "hhhhhhhhhh";
    my_project w;
    w.show();
    return a.exec();
}
