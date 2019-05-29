#include "circle.h"

circle::circle(int x_,int y_, int r_){
    x=x_; y=y_; r=r_;
}

circle::~circle(){}

void circle::draw(QPainter * painter)
{
    painter->drawEllipse(x,y,r,r);
}
