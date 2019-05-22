#ifndef CLASS_CIRCLE_H
#define CLASS_CIRCLE_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "class_figure.h"
#include "mainwindow.h"
using namespace std;

class circle:public figure
{
private:

public:
    void draw(QPainter * painter);
};

#endif // CLASS_CIRCULE_H
