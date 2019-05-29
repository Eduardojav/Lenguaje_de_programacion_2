#include "triangle.h"

triangle::triangle(int x_,int y_, int l_size_){
    x=x_; y=y_; l_size=l_size_;
}

triangle::~triangle(){}

void triangle::draw(QPainter * painter)
{
    QPolygon poly;
    poly << QPoint(x,y);
    poly << QPoint(x-l_size,y+l_size);
    poly << QPoint(x+l_size,y+l_size);
    painter->drawPolygon(poly);
}
