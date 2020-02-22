#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister
{
	private:
		string jefe_familia, animal_emblema, lema,fuerza_montania;
		int cant_dinero, cant_integranes;
	
	public:
		Lannister();
		Lannister(string,string,string,string,int,int);
		string toString();
		~Lannister();
	
};

#endif