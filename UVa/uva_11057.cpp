#include <iostream>
using namespace std;
void bubble_sort(int *A, int n)
{
    int aux;
    while(n>1){
    for(int i=0;i<n-1;i++){
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

int main()
{
    int N;
    int M;
    int aux;
    int i=0;
    int j=1;
    int n1=0;
    int n2=0;
    int *A=new int[10000];
    while(cin>>N){
        while(i<N){
            cin>>aux;
            if(aux<1000001){
                A[i]=aux;
                i++;
            }
        }
        bubble_sort(A,N);
        cin>>M;
        i=0;
        while(i<N-1){
            while(j<N){
                if((A[i]+A[i+j])==M){
                    if(n1==0&&n2==0){
                    n1=A[i];
                    n2=A[i+j];
                    }
                    if(A[i+j]-A[i]<=n2-n1){
                    n1=A[i];
                    n2=A[i+j];
                    }
                j++;
                }
                else if((A[i]+A[i+j])<=M){j++;}
                else{j=N;}
            }
            if((A[i]+A[i+1])>M){i=N-1;}
            i++;
            j=1;
        }
    cout<<"Peter should buy books whose prices are "<<n1<<" and "<<n2<<"."<<endl<<endl;
    i=0;
    j=1;
    n1=0;
    n2=0;
    }
    delete[]A;
    return 0;
}
