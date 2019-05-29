#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "figure.h"

using namespace std;

class triangle:public figure
{
private:
    int l_size;
public:
    triangle(int x_=0, int y_=0, int l_size_=0);
    ~triangle();
    void draw(QPainter * painter);
};

#endif // TRIANGLE_H
