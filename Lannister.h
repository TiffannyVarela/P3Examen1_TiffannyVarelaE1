#include <iostream>
#include <string>
#include <typeinfo>
#include "Guardia_Real.h"
using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister
{
	private:
		string jefe_familia, animal_emblema, lema,fuerza_montania;
		int cant_dinero, cant_integranes;
		//Guardia_Real* ejercito;
	public:
		Lannister();
		Lannister(string,string,string,string,int,int);
		~Lannister();
	
};

#endif