#include <iostream>
#include <string>
#include "Starks.h"
#include "Pequenia_Familia_Noble.h"
using namespace std;

Starks::Starks(){
	string jefe_familia=" ";
	string animal_emblema=" "; 
	string lema=" ";
	int cant_lobos=0;
	int cant_integranes=0;
	Pequenia_Familia_Noble** ejercito = NULL;
}

Starks::Starks(string jefe_familia, string animal_emblema, string lema, int cant_lobos, int cant_integranes){
	this -> jefe_familia=jefe_familia;
	this -> animal_emblema=animal_emblema;
	this -> lema=lema;
	this -> cant_integranes=cant_integranes;
	this -> cant_lobos=cant_lobos;
	ejercito=inicializar(10);
}

string Starks::toString(){
	if (jefe_familia==" ")
	{
		cout<<"Posicion Vacia"<<endl;
	}
	else{
		cout<<"Jefe de Familia: "<<jefe_familia<<endl
		<<"Animal Emblema: "<<animal_emblema<<endl
		<<"Lema: "<<lema<<endl
		<<"Cantidad de Lobos: "<<cant_lobos<<endl
		<<"Cantidad de Integrantes: "<<cant_integranes<<endl;
	}
	return "";
}

Pequenia_Familia_Noble** Starks::inicializar(int size){//inicio inicializar
	Pequenia_Familia_Noble** retval = new Pequenia_Familia_Noble*[size];
	return retval;
}//fin inicializar

Starks::~Starks(){
	cout<<"Starks Eliminados"<<endl;
}