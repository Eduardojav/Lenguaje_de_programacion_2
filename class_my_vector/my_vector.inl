#include <iostream>
using namespace std;

template<class T>
my_vector<T>::my_vector(size_t sz)
{
    size=sz;
    V=new T[size];
}

template<class T>
my_vector<T>::my_vector(const my_vector<T>& vct)
{
    size=vct.size;
    V=new T[size];
    for(int i=0; i<size; i++){
        V[i]=vct.V[i];
    }
}

template<class T>
my_vector<T>::~my_vector()
{
    delete[]V;
}

template<class T>
my_vector<T> & my_vector<T>:: operator =(const my_vector<T>& vct){
    size=vct.size;
    V=new T[size];
    for(int i=0; i<size; i++){
        V[i]=vct.V[i];
    }
    return *this;
}

template<class T>
void my_vector<T>:: Push_back(const T dat)
{
    if(size!=0){
        my_vector<T>vct(size);
        for(int i=0; i<vct.size; i++){
            vct.V[i]=V[i];
        }
        size++;
        delete[]V;
        V=new T[size];
        for(int i=0; i<size; i++){
            V[i]=vct.V[i];
        }
    }
    else{
        size++;
        V=new T[size];
    }
    V[size-1]=dat;
}

template<class T>
void my_vector<T>:: Pop_back()
{
    size--;
    my_vector<T>vct(size);
    for(int i=0; i<vct.size; i++){
        vct.V[i]=V[i];
    }
    delete[]V;
    V=new T[size];
    for(int i=0; i<size; i++){
        V[i]=vct.V[i];
    }
}
template<class T>
T& my_vector<T>:: operator [](size_t i){
    return V[i];
}

template<class T>
size_t& my_vector<T>::Size()const{
    return size;
}
