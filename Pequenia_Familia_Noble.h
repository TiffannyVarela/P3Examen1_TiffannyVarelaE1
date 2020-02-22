#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

#ifndef PEQUENIA_FAMILIA_NOBLE_H
#define PEQUENIA_FAMILIA_NOBLE_H

class Pequenia_Familia_Noble
{
	private:
		string nombre, simbolo, lema;
		int ataque,defensa;
		friend void SimulacionP(Pequenia_Familia_Noble*, int, int);
	public:
		Pequenia_Familia_Noble();
		Pequenia_Familia_Noble(string,string,string,int,int);
		string toString();
		~Pequenia_Familia_Noble();
	
};

#endif