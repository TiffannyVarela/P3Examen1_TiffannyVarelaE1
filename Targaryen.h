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
		string reina, animal_emblema, lema;
		int cant_barcos;
		//Dragones* ejercito;
	public:
		Targaryen();
		Targaryen(string,string,string,int);
		string toString();
		~Targaryen();
	
};

#endif