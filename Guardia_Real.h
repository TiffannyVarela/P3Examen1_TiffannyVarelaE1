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

		Guardia_Real();
		~Guardia_Real();
	
};

#endif