#include <iostream>
#include <string>
#include "Dragones.h"
using namespace std;

Dragones::Dragones(){
	string nombre=" ";
	string color=" "; 
	string tamanio=" ";
	int distancia_fuego=0;
	int ataque=0;
	int defensa=0;
}

Dragones::Dragones(string nombre, string color, string tamanio,int distancia_fuego, int ataque, int defensa){
	this -> nombre=nombre;
	this -> color=color;
	this -> tamanio=tamanio;
	this -> distancia_fuego=distancia_fuego;
	this -> defensa=defensa;
	this -> ataque=ataque;
}

string Dragones::toString(){
	if (nombre==" ")
	{
		cout<<"Posicion Vacia"<<endl;
	}
	else{
		cout<<"Nombre: "<<nombre<<endl
		<<"Color: "<<color<<endl
		<<"Tamanio: "<<tamanio<<endl
		<<"Distancia de Fuego: "<<distancia_fuego<<endl
		<<"Ataque: "<<ataque<<endl
		<<"Defensa: "<<defensa<<endl;
	}
	return "";
}

Dragones::~Dragones(){
	cout<<"Dragones Eliminados"<<endl;
}