#include <iostream>

using namespace std;

int aux[15];

void merge(int *A,int i,int m,int j)
{
    int r=i;int t=m+1; int x=0;
    while(r<=m && t<=j){
        if(A[r]<=A[t]){
            aux[x++]=A[r++];
        }
        else{
            aux[x++]=A[t++];
        }
    }
    while(r<=m){aux[x++]=A[r++];}
    while(t<=j){aux[x++]=A[t++];}
    for(int in=0;in<j-i+1;in++){
        A[in+i]=aux[in];
    }

}

void merge_sort(int *A,int i,int j)
{
    if(i==j)return;
    int m=(i+j)/2;
    merge_sort(A,i,m);
    merge_sort(A,m+1,j);
    merge(A,i,m,j);
}

int main()
{
    int *A=new int[12];
    A[0]=3;
    A[1]=5;
    A[2]=15;
    A[3]=26;
    A[4]=36;
    A[5]=38;
    A[6]=44;
    A[7]=47;
    A[8]=2;
    A[9]=4;
    A[10]=19;
    A[11]=27;
    A[12]=46;
    A[13]=48;
    A[14]=50;
    merge_sort(A,0,14);
    for(int i=0;i<15;i++){
        cout<<A[i]<<endl;
    }
    delete[]A;
    return 0;
}
