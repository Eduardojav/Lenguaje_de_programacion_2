#include <iostream>
#include <set>
using namespace std;

int main() {
	long long int snowflakes;
	multiset<long long> package;
	long int MAX=0,TURBO=0;
	while(cin>>snowflakes && snowflakes>0)
        {
                package.insert(snowflakes);
                if(MAX>TURBO)
                    TURBO=MAX;
                if(package.count(snowflakes)==1)
                    MAX++;
                else{
                    MAX=1;
                    package.clear();
                    package.insert(snowflakes);
                    }
        }
    cout<<TURBO<<endl;

	return 0;
}
