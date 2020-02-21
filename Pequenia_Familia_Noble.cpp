#include <iostream>
#include <string>
using namespace std;

Pequenia_Familia_Noble::Pequenia_Familia_Noble(){
	string nombre=" ";
	string simbolo=" "; 
	string lema=" ";
	int ataque=0;
	int defeansa=0;
}

Pequenia_Familia_Noble::Pequenia_Familia_Noble(string nombre, string simbolo, string lema, int ataque, int defeansa){
	this -> nombre=nombre;
	this -> simbolo=simbolo;
	this -> lema=lema;
	this -> defeansa=defeansa;
	this -> ataque=ataque;
}

string Pequenia_Familia_Noble::toString(){
	if (nombre==" ")
	{
		cout<<"Posicion Vacia"<<endl;
	}
	else{
		cout<<"Nombre: "<<nombre<<endl
		<<"Simbolo: "<<simbolo<<endl
		<<"Lema: "<<lema<<endl
		<<"Ataque: "<<ataque<<endl
		<<"Defensa: "<<defeansa<<endl;
	}
	return "";
}

Pequenia_Familia_Noble::~Pequenia_Familia_Noble(){
	cout<<"PDN Eliminados"<<endl;
}