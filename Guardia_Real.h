#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#ifndef GUARDIA_REAL_H
#define GUARDIA_REAL_H

class Guardia_Real
{
	private:
		string nombre;
		int edad,ataque,defensa;
	public:
		static const int Caballero=1;
		static const int Jinete=2;
		static const int Arquero=3;
		string toString();
		Guardia_Real();
		Guardia_Real(string, int,int,int,int);
		~Guardia_Real();
	
};

#endif