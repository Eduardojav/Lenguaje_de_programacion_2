#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map <string,double> m;
    vector<string>v;
    string s="0";
    int a=1;
    int n=0;
    cin>>n;
    getline(cin,s);
    getline(cin,s);
    while(n!=0){
        while(a!=0 && getline(cin,s)){
            if(s!=""){
                v.push_back(s);
            }
            else{a=0;}
        }
        a=1;
        double y=v.size();
        double x=(1/y)*(100);
        for(int i=0; i<v.size(); i++){
            m[v[i]]=m[v[i]]+x;
        }
        for(auto p:m){
            cout<<p.first<<" ";
            printf("%.4lf", p.second);
            cout<<endl;
        }
        n--;
        v.clear();
        m.clear();
        if(n>0){
            cout<<endl;
        }
    }
    return 0;
}
