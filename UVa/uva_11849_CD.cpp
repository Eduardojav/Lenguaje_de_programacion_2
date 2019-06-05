#include <iostream>
#include <set>
using namespace std;

int main()
{
    long long N,M;
    long long CDN;
    long long CDM;
    long long TCD;
    multiset<long long> CDsN;
    while(cin>>N>>M && (N!=0 || M!=0)){
        TCD=0;
        while(N>0 && cin>>CDN){
            CDsN.insert(CDN);
            N--;
        }
        while(M>0 && cin>>CDM){
            if(*CDsN.find(CDM)==CDM){
                TCD++;
            }
            M--;
        }
        cout<<TCD<<endl;
        CDsN.clear();
    }
    return 0;
}
