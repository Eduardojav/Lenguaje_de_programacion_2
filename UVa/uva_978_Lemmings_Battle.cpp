#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n,B,SG,SB,LSG,LSB,aux;
    multiset<int> LSGs;
    multiset<int> LSBs;
    vector<int> battle;
    multiset<int>::iterator it_SG;
    multiset<int>::iterator it_SB;
    cin>>n;
    while(n>0){
        cin>>B>>SG>>SB;
        while(SG>0){
            cin>>LSG;
            LSGs.insert(LSG);
            SG--;
        }
        while(SB>0){
            cin>>LSB;
            LSBs.insert(LSB);
            SB--;
        }
        while(LSGs.size()!=0 && LSBs.size()!=0){
            if(LSGs.size()!=1){
                it_SG=--LSGs.end();
            }
            else{
                it_SG=LSGs.begin();
            }
            if(LSBs.size()!=1){
                it_SB=--LSBs.end();
            }
            else{
                it_SB=LSBs.begin();
            }
            if(LSGs.size()>=B && LSBs.size()>=B){
                for(int i=0; i<B; i++){
                    battle.push_back(*it_SG);
                    battle.push_back(*it_SB);
                    LSGs.erase(it_SG--);
                    LSBs.erase(it_SB--);
                }
                for(int i=0; i<battle.size(); i+=2){
                    if(battle[i]>battle[i+1]){
                        aux=battle[i]-battle[i+1];
                        LSGs.insert(aux);
                    }
                    if(battle[i+1]>battle[i]){
                        aux=battle[i+1]-battle[i];
                        LSBs.insert(aux);
                    }
                }
                battle.clear();
            }
            else{
                B--;
            }
        }
        if(LSBs.size()!=0){
            cout<<"blue wins"<<endl;
            for(it_SB=--LSBs.end(); it_SB!=LSBs.begin(); it_SB--){
                cout<<*it_SB<<endl;
            }
            it_SB=LSBs.begin();
            cout<<*it_SB<<endl;
        }
        else if(LSGs.size()!=0){
            cout<<"green wins"<<endl;
            for(it_SG=--LSGs.end(); it_SG!=LSGs.begin(); it_SG--){
                cout<<*it_SG<<endl;
            }
            it_SG=LSGs.begin();
            cout<<*it_SG<<endl;
        }
        else{
            cout<<"green and blue died"<<endl;
        }
        LSGs.clear();
        LSBs.clear();
        n--;
        if(n!=0){
            cout<<endl;
        }
    }
    return 0;
}
