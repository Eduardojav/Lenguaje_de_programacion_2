#include "square.h"

square::square(int x_,int y_, int l_size_){
    x=x_; y=y_; l_size=l_size_;
}

square::~square(){}

void square::draw(QPainter * painter)
{
    painter->drawRect(QRect(x,y,l_size,l_size));
}
