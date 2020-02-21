#include <iostream>
#include <string>
#include <typeinfo>
#include "Pequenia_Familia_Noble.h"
using namespace std;

#ifndef STARKS_H
#define STARKS_H

class Starks
{
	private:
		string jefe_familia, animal_emblema, lema;
		int cant_lobos, cant_integranes;
		//Pequenia_Familia_Noble** ejercito;
	public:
		Starks();
		Starks(string,string,string,int,int);
		//Pequenia_Familia_Noble** inicializar(int);
		//void readEjercito(Pequenia_Familia_Noble**, int, int);
		string toString();
		~Starks();
	
};

#endif