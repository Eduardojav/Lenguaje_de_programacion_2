#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <iostream>
using namespace std;

template<class T>
class my_vector
{
    private:
        T* V;
        size_t size;
    public:
        my_vector(size_t sz=0);
        my_vector(const my_vector<T>& vct);
        ~my_vector();
        T& operator [](size_t i);
        size_t& Size()const;
        my_vector<T> & operator =(const my_vector<T>& vct);
        //my_vector<T> & operator =(const T* vct);
        void Push_back(const T dat);
        void Pop_back();
};
#include "my_vector.inl"
#endif
