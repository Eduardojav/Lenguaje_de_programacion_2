#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "class_figure.h"
#include "class_circle.h"
#include "class_square.h"
#include "class_triangle.h"

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

void circle::draw(QPainter * painter)
{
    int r = rand() % 100 + 1;
    painter->drawEllipse({rand()%pixmap->width(), rand()%pixmap->height()}, r, r);
}

void square::draw(QPainter * painter)
{
    int r = rand()%pixmap->width();
    painter->drawRect(QRect(r,r,r,r));
}

void triangle::draw(QPainter * painter)
{
    int r = rand()%pixmap->width();
    int t = rand()%pixmap->height();
    QPolygon poly;
    poly << QPoint(r,r);
    poly << QPoint(r-t,r+t);
    poly << QPoint(r+t,r+t);
    painter->drawPolygon(poly);
}

MainWindow::~MainWindow()
{
    delete pixmap;
    delete pen;
    delete ui;
}


void MainWindow::on_Draw_clicked()
{
    figure *c=new circle [n_circles];
    figure *s=new square [n_squares];
    figure *t=new triangle[n_triangles];
    figure *af[3]={c,s,t};
    pixmap->fill();
    for(int i=0;i<n_circles;i++){
        af[0][i].draw(painter);
    }
    for(int i=0;i<n_squares;i++){
        af[1][i].draw(painter);
    }
    for(int i=0;i<n_triangles;i++){
        af[2][i].draw(painter);
    }
    ui->label_draw_area->setPixmap(*pixmap);
    delete[]c;
    delete[]s;
    delete[]t;
}

void MainWindow::on_Add_circle_clicked()
{
    n_circles++;
}

void MainWindow::on_Add_square_clicked()
{
    n_squares++;
}


void MainWindow::on_Add_triangle_clicked()
{
   n_triangles++;
}
