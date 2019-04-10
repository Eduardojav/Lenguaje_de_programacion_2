//Trabajo de Daniel Mendiguri y Eduardo Carnero
#include <iostream>

using namespace std;
class my_string
{
private:
    char *A;
    int size;
public:
    my_string(const char* str=NULL){
        int i;
        while(str[i]!='\0'){
            i++;
        }
        A=new char[i+1];
        for(int j=0; j<i+1;j++){A[j]=str[j];}
    }
    my_string(const my_string & str);
    ~my_string(){delete[]A;}
    //my_string & operator =(const my_string &str);
    my_string & operator =(const char* & str){
        int i=0;
        while(str[i]!='\0'){
            i++;
        }
        delete[]A;
        A=new char[i+1];
        for(int j=0; j<i+1;j++){A[j]=str[j];}
        size=i+1;
    }
    //friend std::istream &operator >>(std::istream & is,const my_string &str);
    friend std::ostream &operator <<(std::ostream & os,const my_string &str){
        int i=0;
        while(str.A[i]!='\0'){
            os<<str.A[i];
            i++;
        }
        return os;
    }
    my_string & operator +(const my_string &str);
    char & operator[](const int & i);

};
int main()
{
    my_string cadena1;
    cadena1="hola";
    cout<<cadena1<<endl;
    return 0;
}
