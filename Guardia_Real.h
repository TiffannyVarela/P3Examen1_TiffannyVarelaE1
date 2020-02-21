#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#ifndef GUARDIA_REAL_H
#define GUARDIA_REAL_H

class Guardia_Real
{
	private:
		string nombre,tipo;
		int edad,ataque,defensa;
	public:
		static const int tipo();
		Guardia_Real();
		~Guardia_Real();
	
};

#endif