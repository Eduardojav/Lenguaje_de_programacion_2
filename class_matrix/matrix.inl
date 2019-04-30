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
    n_rows = nr;
    n_columns = nc;
    M = new T *[nr];
    for(int i=0; i<nr; i++){
        M[i] = new T [nc];
    }
}

template <class T>
matrix<T> :: ~matrix()
{
    for(int i=0; i<n_rows; i++){
        delete [] M[i];
    }
    delete [] M;
}

template <class T>
matrix<T> :: matrix(const matrix<T> & dat)
{
    n_rows = dat.n_rows;
    n_columns = dat.n_columns;
    M= new T* [n_rows];
    for(int i=0; i<n_rows; i++){
        M[i] = new T [n_columns];
    }
    for(int i=0; i<n_columns; i++){
        for(int j=0; j<n_rows; j++){
            M[i][j] = dat.M[i][j];
        }
    }

}

template <class T>
T & matrix<T>:: operator () (size_t i, size_t j)
{
    return M[i-1][j-1];
}

template <class T>
matrix<T> matrix<T> :: operator + (const matrix<T> & dat)
{
    matrix<T> mt;
    mt.n_rows = dat.n_rows;
    mt.n_columns = dat.n_columns;
    mt.M = new T* [dat.n_rows];
    for(int i=0; i<mt.n_rows; i++){
        mt.M[i] = new T [dat.n_columns];
    }
    for(int i=0; i<n_columns; i++){
        for(int j=0; j<n_rows; j++){
            mt.M[i][j] = M[i][j] + dat.M[i][j];
        }
    }
    return mt;
}
template <class T>
matrix<T> matrix<T> :: operator * (const matrix<T> & dat)
{
    matrix<T> mt;
    mt.n_rows = n_rows;
    mt.n_columns = dat.n_columns;
    mt.M = new T* [mt.n_rows];
    for(int i=0; i<mt.n_rows; i++){
        mt.M[i] = new T [mt.n_columns];
    }
    T suma = 0;
    for(int i=0; i<n_columns;i++){
        for(int j=0; j<n_rows; j++){
            for(int l=0; l<n_columns;l++){
                suma = suma + (M[i][l] * dat.M[l][j]);
            }
            mt.M[i][j] = suma;
            suma = 0;
        }
    }
    return mt;
}

template <class T>
matrix<T> &matrix<T> :: operator << (const T v)
{
    if(r<n_rows){
        M[r][c] = v;
        if(c<n_columns-1){
            c++;
        }
        else{
            r++;
            c = 0;

        }
    }
    else{
        cout<<"Full"<<endl;
    }
    return *this;
}
template <class T>
ostream& operator << (ostream & os,const matrix<T>& dat)
{
    for(int i=0; i<dat.n_rows; i++){
        for(int j=0;j<dat.n_columns;j++){
            os<<dat.M[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}
