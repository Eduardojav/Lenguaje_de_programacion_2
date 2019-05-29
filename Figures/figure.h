#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>

using namespace std;

class figure{
protected:

public:
    virtual void draw(QPainter * painter)=0;
    virtual ~figure();
};

#endif // FIGURE_H
