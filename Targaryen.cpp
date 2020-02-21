#include <iostream>
#include <string>
#include "Targaryen.h"
#include "Dragones.h"
using namespace std;

Targaryen::Targaryen(){
	string reina=" ";
	string animal_emblema=" "; 
	string lema=" ";
	int cant_barcos=0;
}

Targaryen::Targaryen(string reina, string animal_emblema, string lema,int cant_barcos){
	this -> reina=reina;
	this -> animal_emblema=animal_emblema;
	this -> lema=lema;
	this -> cant_barcos=cant_barcos;
}

string Targaryen::toString(){
	if (reina==" ")
	{
		cout<<"Posicion Vacia"<<endl;
	}
	else{
		cout<<"Reina: "<<reina<<endl
		<<"Animal Emblema: "<<animal_emblema<<endl
		<<"Lema: "<<lema<<endl
		<<"Cantidad de Barcos: "<<cant_barcos<<endl;
	}
	return "";
}

Targaryen::~Targaryen(){
	cout<<"Targaryen Eliminados"<<endl;
}