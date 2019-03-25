#include <iostream>

using namespace std;

int buscar(int* array1,int i)
{
    int* s= new int[i];
    int n; int menor;int y;int aux;int rpta;
    n=0;y=0;aux=0;
    while(array1[n]!=-1){n++;}
    menor=array1[0];
    while(y<i){
        for(int j=0; j<n; j++){
            for(int t=1; t<n ; t++){
            if(array1[t]<array1[j] && y==0){
                menor=array1[t];
            }

            if(array1[t]<array1[j] && y!=0){
                for(int w=0; w<y; w++){
                    if(array1[t]==s[w]){
                       aux=1;
                    }
                }
                if(aux!=1){
                    menor=array1[t];
                }
                aux=0;
            }
        }
        }
        s[y]=menor;
        y++;
    }
    rpta=s[y-1];
    delete[]s;
    return rpta;
}

bool palindroma(char* str)
{
    int i; int j;
    i=j=0;
    while(str[j]!='\0'){j++;}
    j--;
    while(i<j){
        if(str[i]!=str[j-i]){
            return 0;
        }
        i++;
    }
    return 1;
}

int potencia(int num,int i)
{
    if(i==1) return num;
    else if(i%2!=0) return num*potencia(num,i-1);
    else if(i%2==0) return potencia(num*num,i/2);
}

int pontencia_interativa(int n,int i)
{
    int total=1;
    while(i!=1){
        if(i%2!=0){
            total=total*n;
            i--;
        }
        else{
        n=n*n;
        i=i/2;
        }
    }
    return total*n;
}

int main()
{
    //1
    int a=10;
    int b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
    //2
    int* conjunto= new int[7];
    int k;
    conjunto[0]=3;
    conjunto[1]=2;
    conjunto[2]=7;
    conjunto[3]=9;
    conjunto[4]=1;
    conjunto[5]=5;
    conjunto[6]=-1;
    cin>>k;
    cout<<"El "<<k<<"-esimo menor es: "<<buscar(conjunto,k)<<endl;
    delete[] conjunto;
    //3
    char* palabra= new char[5];
    palabra[0]='a';
    palabra[1]='b';
    palabra[2]='c';
    palabra[3]='b';
    palabra[4]='a';
    cout<<palindroma(palabra)<<endl;
    delete[] palabra;
    //4
    cout<<potencia(2,10)<<endl;
    cout<<pontencia_interativa(2,10)<<endl;
    //5
    const int* const p= new int(5);
    const int& c=*p;
    cout<<c<<endl;
    delete[] p;

    return 0;
}
