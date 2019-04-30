#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
    matrix<int> hoa(2,2);
    hoa<<1<<2<<3<<4;
    matrix<int> he(2,2);
    he<<1<<2<<3<<4;
    cout<<hoa+he;
    cout<<hoa*he;
    cout<<hoa(1,2);
    return 0;
}
