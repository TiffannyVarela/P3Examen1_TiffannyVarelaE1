#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#ifndef DRAGONES_H
#define DRAGONES_H

class Dragones
{
	private:
		string nombre, color, tamanio;
		int distancia_fuego, ataque, defensa;
	public:
		Dragones();
		Dragones(string,string,string,int,int,int);
		~Dragones();
	
};

#endif