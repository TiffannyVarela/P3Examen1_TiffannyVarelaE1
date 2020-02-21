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
		friend void Simulacion(Pequenia_Familia_Noble**, Guardia_Real**, Dragones**, int, int, int);
	public:
		Dragones();
		Dragones(string,string,string,int,int,int);
		string toString();
		~Dragones();
	
};

#endif