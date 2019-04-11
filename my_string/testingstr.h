//trabajo de Daniel Mendiguri y Eduardo Carnero
#include <iostream>
using namespace std;
 void prueba(){
 	my_string prim("h");
	my_string prim2("hsd");
	my_string prim3("bye");
    my_string prim4;
    my_string prim5;
    cout<<"Ingrese el valor de prim5: ";
    cin>>prim5;
    cout<<"prim5 es: "<<prim5<<endl;
    prim4=prim2;
	prim=prim3+prim2;
	cout<<"prim1=prim3+prim2"<<endl<<"=> prim1 = "<<prim<<endl;
	prim3="GG la clase string";
	cout<<prim3<<endl;
	prim3=prim3 + " no lo crea profe si la terminamos";
	cout<<prim3<<endl;
	cout<<"prim3[6]="<<prim3[6]<<endl;
	cout<<"prim2 es igual a prim4?"<<endl;
	if(prim2==prim4)cout<<"True"<<endl;
	else cout<<"no nos repruebe profe :'v"<<endl;
	cout<<"prim1 es: "<<prim<<endl;
	cout<<"prim3 es: "<<prim3<<endl;
	cout<<"cual es mayor???"<<endl;
	if(prim<prim3)cout<<"p1 mayor"<<endl;
	else    cout<<"p3 mayor"<<endl;
	cout<<"prim4 es: "<<prim4<<endl;
	cout<<"prim5 es: "<<prim5<<endl;
	cout<<"cual es mayor???"<<endl;
	if(prim4>prim5)cout<<"p4 mayor"<<endl;
	else    cout<<"p5 mayor"<<endl;
	prim2="abc";
	prim3="abc";
	cout<<"prim2 es: "<<prim2<<endl;
	cout<<"prim3 es: "<<prim3<<endl;
	cout<<"es prim2 menor igual a prim3?"<<endl;
	if(prim2<=prim3)cout<<"Simon"<<endl;
	else    cout<<"Nel pastel"<<endl;
	prim4="qwerty";
	prim5="qwerty";
	cout<<"es prim4 mayor igual a prim5?"<<endl;
	cout<<"prim4 es: "<<prim4<<endl;
	cout<<"prim5 es: "<<prim5<<endl;
    if(prim4>=prim5)cout<<"Simon"<<endl;
	else    cout<<"Nel pastel"<<endl;
}
