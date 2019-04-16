#include <iostream>

using namespace std;

int aux[6];
int cont=0;
void merge(int *A,int i,int m,int j)
{
    int r=i;int t=m+1; int x=0;
    while(r<=m && t<=j){
        if(A[r]<=A[t]){

            r++;
        }
        else{
            t++;
            cont++;
        }
    }
    while(r<=m){
        r++;
        if(A[r]>A[t]){
        cont++;}
    }
}

void merge_contador(int *A,int i,int j)
{
    if(i==j)return;
    int m=(i+j)/2;
    merge_contador(A,i,m);
    merge_contador(A,m+1,j);
    merge(A,i,m,j);
}

int main()
{
    int *A=new int[12];
    A[0]=3;
    A[1]=7;
    A[2]=2;
    A[3]=4;
    A[4]=9;
    A[5]=10;
    merge_contador(A,0,5);
    cout<<cont<<endl;
    delete[]A;
    return 0;
    return 0;
}
