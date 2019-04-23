#include <iostream>

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
    n_rows=nr;
    n_colums=nr;
    M= new T *[nr];
    for(int i=0; i<nr; i++){
        M[i]=new T [nc];
    }
}

template <class T>
matrix<T>::~matrix()
{
    for(int i=0; i<n_rows; i++){
        delete [] M[i];
    }
    delete [] M;
}

template <class T>
matrix<T> :: matrix(const matrix<T> & dat)
{
    n_rows=dat.n_rows;
    n_colums=dat.n_colums;
    M= new T *[n_rows];
    for(int i=0; i<n_rows; i++){
        M[i]=new T [n_colums];
    }
    for(int i=0; i<n_colums; i++){
        for(int j=0; j<n_rows; j++){
            M[i][j]=dat.M[i][j];
        }
    }

}

template <class T>
T & matrix<T>:: operator () (size_t i, size_t j)
{
    return M[i][j];
}

template <class T>
matrix<T> matrix<T> :: operator + (const matrix<T> & dat)
{
    matrix<T> mt;
    mt.n_rows=n_rows+dat.n_rows;
    mt.n_colums=n_colums+dat.n_colums;
    mt.M= new T *[mt.n_rows];
    for(int i=0; i<mt.n_rows; i++){
        mt.M[i]=new T [mt.n_colums];
    }
    for(int i=0; i<n_colums; i++){
        for(int j=0; j<n_rows; j++){
            mt.M[i][j]=M[i][j]+dat.M[i][j];
        }
    }
    return mt;
}
template <class T>
matrix<T> matrix<T> :: operator * (const matrix<T> & dat)
{
    matrix<T> mt;
    mt.n_rows=n_rows;
    mt.n_colums=dat.n_colums;
    mt.M= new T *[mt.n_rows];
    for(int i=0; i<mt.n_rows; i++){
        mt.M[i]=new T [mt.n_colums];
    }
}
template <class T>
matrix<T> matrix<T> :: operator << (T&v)
{
}
