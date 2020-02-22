#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen
{
	private:
		string reina, animal_emblema, lema;
		int cant_barcos;
	public:
		Targaryen();
		Targaryen(string,string,string,int);
		string toString();
		~Targaryen();
	
};

#endif