//trabajo de Daniel Mendiguri y Eduardo Carnero
#include "my_string2.h"
#include "testingstr.h"
#include<iostream>
my_string aux("hola");
my_string::my_string(){
            A=new char[0];}
my_string::my_string (const char * text){
	tamano(text);
	A = new char[tam];
	for(int i=0;i<tam;i++){
		A[i]=text[i];}}
my_string::~my_string(){
	delete[] A;}
my_string::tamano(const char * text){
    int i=0;
    tam=0;
	while(text[i] != '\0'){
            i++;
            tam++;}
	tam++;
	return tam;
}
my_string::my_string(const my_string & text){
	int b=text.tam;
	delete[] A;
	A=new char[b];
	tam=b;
	for(int i=0;i<b;i++)
		A[i]=text.A[i];}
my_string& my_string::operator = (const my_string & text){
	int b=text.tam;
	delete[] A;
	A=new char[b];
	tam=b;
	for(int i=0;i<b;i++)
		A[i]=text.A[i];
     return *this;
}
my_string & my_string::operator = (const char* text){
	int b=tamano(text);
	delete[] A;
	A=new char[b];
	tam=b;
	for(int i=0;i<b;i++)
		A[i]=text[i];
    return *this;
}
my_string& my_string::operator + (const my_string & text){
	int b=text.tam;
	int i=0;
	int c=0;
	delete[] aux.A;
	aux.A=new char[b+tam];
	aux.tam=tam+b;
	for( i=0;i<tam;i++)aux[i]=A[i];
    for( i=tam-1;i<tam+b;i++) aux[i]=text.A[c++];
    return aux;
}
my_string & my_string:: operator +(const  char* text){
    int i=0;
    int b=0;
	while(text[i] != '\0'){
            i++;
            b++;}
	int c=0;
	delete[] aux.A;
	aux.A=new char[b+tam];
	aux.tam=tam+b;
	for( i=0;i<tam;i++)aux[i]=A[i];
    for( i=tam-1;i<tam+b;i++) aux[i]=text[c++];
    return aux;
}
char &my_string:: operator[]( int i){
    if(i>=0&&i<tam)
        return A[i];
    else{
        cout << "Posición incorrecta: " << i << endl;
    }}
bool my_string:: operator == (const my_string & text){
    if(tam!=text.tam) return false;
    for(int i=0;i<tam;i++)
        if(A[i]!=text.A[i])  return false;
    return true;}
bool my_string:: operator < (const my_string & text){
    int t;
    if(text.tam>tam){
        t=tam;
    }
    else{
        t=text.tam;
    }
    for(int i=0; i<t ;i++){
        if(A[i]<text.A[i]){
            return true;
        }
        else if(A[i]>text.A[i]){
            return false;
        }
    }
    if(text.tam>tam){
        return true;
    }
    else{
        return false;
    }
}
bool my_string:: operator > (const my_string & text){
    int t;
    if(text.tam>tam){
        t=tam;
    }
    else{
        t=text.tam;
    }
    for(int i=0; i<t ;i++){
        if(A[i]>text.A[i]){
            return true;
        }
        else if(A[i]<text.A[i]){
            return false;
        }
    }
    if(text.tam<tam){
        return true;
    }
    else{
        return false;
    }
}
bool my_string:: operator <= (const my_string & text){
    int t;
    if(text.tam>tam){
        t=tam;
    }
    else{
        t=text.tam;
    }
    for(int i=0; i<t ;i++){
        if(A[i]<text.A[i]){
            return true;
        }
        else if(A[i]>text.A[i]){
            return false;
        }
    }
    if(text.tam>tam){
        return true;
    }
    else if(text.tam<tam){
        return false;
    }
    else{
        return true;
    }
}
bool my_string:: operator >= (const my_string & text){
    int t;
    if(text.tam>tam)
        t=tam;
    else
        t=text.tam;
    for(int i=0; i<t ;i++){
        if(A[i]>text.A[i])
            return true;
        else if(A[i]<text.A[i])
            return false;}
    if(text.tam<tam)
        return true;
    else if(text.tam>tam)
        return false;
    else
        return true;
}
my_string& my_string::operator += (const my_string & text){
	int b=text.tam;
	int i=0;
	int c=0;
	char * e=new char[b+tam];
	for( i=0;i<tam;i++)e[i]=A[i];
    for( i=tam-1;i<tam+b;i++)e[i]=text.A[c++];
    delete[]A;
    A=new char[b+tam];
    for( i=0; i<tam+b; i++)A[i]=e[i];
    delete[]e;
}
my_string & my_string:: operator += (const  char* text){
    int i=0;
    int b=0;
	while(text[i] != '\0'){
            i++;
            b++;}
	int c=0;
	char * e=new char[b+tam];
	for( i=0;i<tam;i++)e[i]=A[i];
    for( i=tam-1;i<tam+b;i++) e[i]=text[c++];
    delete[]A;
    A=new char[b+tam];
    for( i=0; i<tam+b; i++)A[i]=e[i];
    delete[]e;
}
int main(){
prueba();
return 0;
}
