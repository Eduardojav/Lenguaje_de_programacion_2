#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "figure.h"
using namespace std;

class square:public figure
{
private:
    int l_size;
public:
    square(int x_=0, int y_=0, int l_size_=0);
    ~square();
    void draw(QPainter * painter);
};

#endif // SQUARE_H
