#include <iostream>

using namespace std;

bool Binary_search(int *A,int n,int x)
{
    int i=0;
    int j=n-1;
    int m;
    while(i<=j)
    {
        m=(i/j)/2;
        if(A[m]==x){
            return true;
        }
        if(A[m]<x){
            i=m+1;
        }
        else{
            j=m-1;
        }
    }
    return false;
}
bool lineal_search(int *A,int n,int x)
{
    for(int i=0;i<n;i++){
        if(A[i]==x){
            return true;
        }
    }
    return false;
}
void bubble_sort(int *A, int n)
{
    int aux;
    while(n>0){
    for(int i=0;i<n;i++){
        if(A[i]>A[i+1])
        {
            aux=A[i+1];
            A[i+1]=A[i];
            A[i]=aux;
        }
    }
    n--;
    }
}
void selection_sort(int *A, int n)
{
    int aux;
    int m;
    for(int j=0;j<n-1;j++){
        m=j;
        for(int i=j+1;i<n;i++){
            if(A[i]<A[m]){
                m=i;
            }
        }
        aux=A[j];
        A[j]=A[m];
        A[m]=aux;
    }
}
void insertion_sort(int *A, int n)
{
    int ext;
    int j=0;
    int aux;
    while(j<n){
        ext=A[j+1];
        for(int i=j;i>=0;i--){
            if(A[i]>ext){
                A[i+1]=A[i];
            }
            else{
                A[i+1]=ext;
                i=-1;
            }
            aux=i;
        }
        if(aux==0){
            A[0]=ext;
        }
        j++;
    }
}
int main()
{
    int* conjunto= new int[7];
    conjunto[0]=3;
    conjunto[1]=2;
    conjunto[2]=7;
    conjunto[3]=9;
    conjunto[4]=1;
    conjunto[5]=5;
    conjunto[6]=17;
    cout<<"Busqueda Lineal: "<<lineal_search(conjunto,7,1)<<endl;
    bubble_sort(conjunto,7);
    //selection_sort(conjunto,7);
    //insertion_sort(conjunto,7);
    cout<<"Lista Ordenada:"<<endl;
    for(int i=0;i<7;i++){
        cout<<conjunto[i]<<endl;
    }
    cout<<"Busqueda Binaria: "<<Binary_search(conjunto,7,1)<<endl;
    delete[] conjunto;
    return 0;
}
