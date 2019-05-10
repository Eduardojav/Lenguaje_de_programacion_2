#include <iostream>
#include <cstring>
using namespace std;

bool neighbors(size_t i, size_t j){
    size_t x = i^j;
    return (x&(-x)) == x;
}

int main()
{
    size_t n;
    size_t aux;
    while(cin >> n){

        int weights[1<<n];
        for(int i=0; i<(1<<n); i++){
            cin >> aux;
            weights[i]=aux;
        }

        int potencies[1<<n];
        memset(potencies, 0, sizeof 1<<n);
        for(int i=0; i<(1<<n); i++){
            for(int j=0; j<(1<<n); j++){
                if(neighbors(i, j) && (i != j)) potencies[i] = potencies[i]+ weights[j];
            }
        }

        int max_sum=0;
        for(int i=0; i<(1<<n); i++){
            for(int j=0; j<(1<<n); j++){
                if(neighbors(i, j) && (i != j)){
                    if(max_sum<(potencies[i]+potencies[j])){
                        max_sum=potencies[i]+potencies[j];
                    }
                }
            }
        }
        cout<<max_sum<<endl;
    }
    return 0;
}
