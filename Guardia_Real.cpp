#include <iostream>
#include <string>
#include "Guardia_Real.h"
using namespace std;

Guardia_Real::Guardia_Real(){
	string nombre=" ";
	int tipo=0; 
	int edad=0;
	int ataque=0;
	int defensa=0;
}

Guardia_Real::Guardia_Real(string nombre, int tipo,int edad, int ataque, int defensa){
	this -> nombre=nombre;
	this -> tipo=tipo;
	this -> edad=edad;
	this -> defensa=defensa;
	this -> ataque=ataque;
}


string Guardia_Real::toString(){
	if (nombre==" ")
	{
		cout<<"Posicion Vacia"<<endl;
	}
	else{
		cout<<"Nombre: "<<nombre<<endl
		<<"Tipo: "<<tipo<<endl
		<<"Edad: "<<edad<<endl
		<<"Ataque: "<<ataque<<endl
		<<"Defensa: "<<defensa<<endl;
	}
	return "";
}

Guardia_Real::~Guardia_Real(){
	cout<<"Guardia Real Eliminados"<<endl;
}