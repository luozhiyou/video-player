#pragma once
// hahaha
#include <QtWidgets/QMainWindow>
#include "ui_my_project.h"

class my_project : public QMainWindow
{
    Q_OBJECT

public:
    my_project(QWidget *parent = Q_NULLPTR);

private:
    Ui::my_projectClass ui;
};
