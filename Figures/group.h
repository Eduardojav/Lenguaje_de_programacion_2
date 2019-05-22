#ifndef GROUP_H
#define GROUP_H

#include <iostream>
using namespace std;

class group{
private:

public:
    group(int n_figures=0,int n_circules=0,int n_squares=0,int n_triangles=0);
    void add_figure(){ n_figures++;}
    void add_circules(){n_circules++;}
    void add_squares(){n_squares++;}
    void add_triangles(){n_triangles++;}
    int n_f(){
        return n_figures;
    }
    int n_c(){
        return n_circules;
    }
    int n_s(){
        return n_squares;
    }
    int n_t(){
        return n_triangles;
    }
};

#endif // GROUP_H
