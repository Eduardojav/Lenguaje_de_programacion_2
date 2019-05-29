#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "figure.h"
using namespace std;

class circle:public figure
{
private:
    int r;
public:
    circle(int x_=0,int y_=0,int r_=0);
    ~circle();
    void draw(QPainter * painter);
};

#endif // CIRCLE_H
