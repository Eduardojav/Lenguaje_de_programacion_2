#include <iostream>
#include <cassert>
using namespace std;

/*template <class T>
matrix<T> :: matrix (const T** dat){
    n_rows=0;
    n_colums=0;
    while(dat[n_rows][0] != '\0'){
        n_rows++;
    }
    while(dat[0][n_colums] != '\0'){
        n_colums++;
    }
    M= new T *[n_rows];
    for(int i=0; i<n_rows; i++){
        M[i]=new T [n_colums];
    }
    for
}*/

template <class T>
matrix<T> :: matrix(size_t nr, size_t nc)
{
    n_rows = nr;
    n_columns = nc;
    M = new T [n_rows*n_columns];
}

template <class T>
matrix<T> :: ~matrix()
{
    delete [] M;
}

template <class T>
matrix<T> :: matrix(const matrix<T> & dat)
{
    n_rows = dat.n_rows;
    n_columns = dat.n_columns;
    M= new T [n_rows*n_columns];
    for(int i=0; i<n_columns; i++){
        for(int j=0; j<n_rows; j++){
            M[j*n_rows + i] = dat.M[j*n_rows + i];
        }
    }

}

template <class T>
T & matrix<T>:: operator () (size_t i, size_t j)
{
    assert(i<n_rows && j<n_columns);
    return M[j*n_rows + i];
}

template <class T>
matrix<T> matrix<T> :: operator + (const matrix<T> & dat)
{
    assert(n_rows == dat.n_rows && n_columns == dat.n_columns);
    matrix<T> mt;
    mt.n_rows = dat.n_rows;
    mt.n_columns = dat.n_columns;
    mt.M = new T [mt.n_rows*mt.n_columns];
    for(int i=0; i<n_columns; i++){
        for(int j=0; j<n_rows; j++){
            mt.M[j*mt.n_rows + i] = M[j*n_rows + i] + dat.M[j*dat.n_rows + i];
        }
    }
    return mt;
}
template <class T>
matrix<T> matrix<T> :: operator * (const matrix<T> & dat)
{
    assert(n_columns == dat.n_rows);
    matrix<T> mt;
    mt.n_rows = n_rows;
    mt.n_columns = dat.n_columns;
    mt.M = new T [mt.n_rows*mt.n_columns];
    T suma = 0;
    for(int i=0; i<n_columns;i++){
        for(int j=0; j<n_rows; j++){
            for(int l=0; l<n_columns;l++){
                suma = suma + (M[l*n_rows + i] * dat.M[j*dat.n_rows + l]);
            }
            mt.M[j*mt.n_rows + i] = suma;
            suma = 0;
        }
    }
    return mt;
}

template <class T>
matrix<T> &matrix<T> :: operator << (const T v)
{
    if(r<n_rows){
        M[c*n_rows + r] = v;
        if(c<n_columns-1){
            c++;
        }
        else{
            r++;
            c = 0;

        }
    }
    return *this;
}
template <class T>
ostream& operator << (ostream & os,const matrix<T>& dat)
{
    for(int i=0; i<dat.n_rows; i++){
        for(int j=0;j<dat.n_columns;j++){
            os<<dat.M[j*dat.n_rows + i]<<" ";
        }
        os<<endl;
    }
    return os;
}
