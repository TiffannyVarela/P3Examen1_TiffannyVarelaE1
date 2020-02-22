#include <iostream>
#include <string>
#include "Lannister.h"
using namespace std;

Lannister::Lannister(){
	string jefe_familia=" ";
	string animal_emblema=" "; 
	string lema=" ";
	string fuerza_montania=" ";
	int cant_dinero=0;
	int cant_integranes=0;
}

Lannister::Lannister(string jefe_familia, string animal_emblema, string lema, string fuerza_montania, int cant_dinero, int cant_integranes){
	this -> jefe_familia=jefe_familia;
	this -> animal_emblema=animal_emblema;
	this -> lema=lema;
	this -> cant_integranes=cant_integranes;
	this -> cant_dinero=cant_dinero;
}

string Lannister::toString(){
	if (jefe_familia==" ")
	{
		cout<<"Posicion Vacia"<<endl;
	}
	else{
		cout<<"Jefe de Familia: "<<jefe_familia<<endl
		<<"Animal Emblema: "<<animal_emblema<<endl
		<<"Lema: "<<lema<<endl
		<<"Fuerza de la Motania: "<<fuerza_montania<<endl
		<<"Cantidad de Dinero: "<<cant_dinero<<endl
		<<"Cantidad de Integrantes: "<<cant_integranes<<endl;
	}
	return "";
}

Lannister::~Lannister(){
	cout<<"Lannister Eliminados"<<endl;
}