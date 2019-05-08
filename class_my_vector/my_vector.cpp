#include <iostream>
#include <vector>
#include "my_vector.h"
using namespace std;

int main()
{
    vector<int>h;
    h.push_back(1);
    h.push_back(2);
    h.push_back(3);
    h.pop_back();
    h.push_back(4);
    for(int i=0; i<h.size(); i++){
        cout<<h[i]<<endl;
    }
    my_vector<int>t;
    t.Push_back(1);
    t.Push_back(2);
    cout<<"t[0]: "<<t[0]<<endl;
    cout<<"t[1]: "<<t[1]<<endl;
    t.Pop_back();
    t.Push_back(3);
    cout<<"t[1]: "<<t[1]<<endl;
    return 0;
}
