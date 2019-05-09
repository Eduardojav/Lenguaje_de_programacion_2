#include <iostream>

using namespace std;

int P[1000000];
int B[1000000];
int *A;

void prime_numbers(size_t n)
{
    B[0]=B[1]=1;
    for(size_t i=0;i<n;i++){
        B[i]=0;
    }
    size_t q=0;
    size_t c=0;
    for(size_t i=3;i<n; i=i+2)
    {
        if(!B[i]){
            P[q++]=i;
            c++;
            for(size_t j=(i*i); j<n; j=j+(2*i)){
                B[j]=1;
            }
        }
    }
    delete[]A;
    A=new int[c];
    for(size_t i=0;i<c;i++){
        A[i]=P[i];
    }
}

void big_sum (size_t n){
	size_t i=0;
	size_t j=0;
	while(A[i]<n){i++;}
	i--;
	while(j<=i){
		if(n==A[i]+A[j]){
			cout<<n<< " = "<< A[j] <<" + " <<A[i]<<endl;
			j=i+1;
		}
		else if (n>A[i]+A[j]){
			j++;
		}
		else if(n<A[i]+A[j]){
            i--;
        }
        else{
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
	}

}

int main()
{
    size_t n=1;
    prime_numbers(1000000);
    while(n!=0){
        cin>>n;
        if(n!=0){
            big_sum(n);
        }
    }
    return 0;
}
