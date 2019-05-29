#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <vector>
#include "figure.h"
#include "circle.h"
#include "square.h"
#include "triangle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Draw_clicked();

    void on_Add_circle_clicked();

    void on_Add_square_clicked();

    void on_Add_triangle_clicked();


protected:
    QPainter * painter;
    QPixmap * pixmap;
    QPen * pen;
    vector<figure*> af;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
