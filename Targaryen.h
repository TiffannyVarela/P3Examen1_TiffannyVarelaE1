#include <iostream>
#include <string>
#include <typeinfo>
#include "Dragones.h"
using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen
{
	private:
		string jefe_familia, animal_emblema, lema;
		int cant_lobos, cant_integranes;
		//Dragones* ejercito;
	public:
		Targaryen();
		Targaryen(string,string,string,int,int);
		~Targaryen();
	
};

#endif