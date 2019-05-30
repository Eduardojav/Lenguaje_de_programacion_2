#include "mainwindow.h"
#include "ui_mainwindow.h"

figure::~figure(){}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pixmap = new QPixmap(600, 400);
    pixmap->fill();

    pen = new QPen(QColor("black"));

    ui->label_draw_area->setPixmap(*pixmap);

    painter = new QPainter(pixmap);
    painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
    delete painter;
    delete pixmap;
    delete pen;
    delete ui;
    for(unsigned long long i=0;i<af.size();i++){
        delete [] af[i];
    }
}

void MainWindow::on_Draw_clicked()
{
    pixmap->fill();
    for(unsigned long long i=0; i<af.size();i++){
        af[i]->draw(painter);
    }
    ui->label_draw_area->setPixmap(*pixmap);
}

void MainWindow::on_Add_circle_clicked()
{
    int r = rand() % 100 + 1;
    af.push_back(new circle(rand()%pixmap->width(), rand()%pixmap->height(),r));
}

void MainWindow::on_Add_square_clicked()
{
    int l = rand()%100+1;
    int z=rand()%pixmap->width();
    int w=rand()%pixmap->height();

    af.push_back(new square(z,w,l));
}


void MainWindow::on_Add_triangle_clicked()
{
   int z=rand()%pixmap->width();
   int w=rand()%pixmap->height();
   int l = rand()%100+1;
   af.push_back(new triangle(z,w,l));
}
