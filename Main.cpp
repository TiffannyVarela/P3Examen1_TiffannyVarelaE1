#include <iostream>
#include <string>
#include "Starks.h"
#include "Pequenia_Familia_Noble.h"
#include "Lannister.h"
#include "Guardia_Real.h"
#include "Targaryen.h"
#include "Dragones.h"
using namespace std;

int menuInicio();
int menuFamily();
int menuFamilias();

//STARKS
Starks* newStarks();
Pequenia_Familia_Noble* newPFN();
void readEjercitoStark(Pequenia_Familia_Noble**,int ,int);
Pequenia_Familia_Noble** inicializarStark(int);

//LANNISTER
Lannister* newLannister();
Guardia_Real* newGR();
void readEjercitoLannister(Guardia_Real**,int ,int);
Guardia_Real** inicializarLannister(int);

//TARGARYEN
Targaryen* newTargaryen();
Dragones* newDrag();
void readEjercitoTargaryen(Dragones**,int ,int);
Dragones** inicializarTargaryen(int);

int main(int argc, char const *argv[])
{
	int creaS=-1, creaL=-1,creaT=-1;
	int opc=0,opcF=0,opcFam=0;
	int cont_PFN=0,cont_GR=0, cont_DRAG=0;

	//STARKS
	Starks* stark;
	Pequenia_Familia_Noble* PFN;
	Pequenia_Familia_Noble** ejercitoStark=inicializarStark(10);

	//LANNISTER
	Lannister* lannister;
	Guardia_Real* GR;
	Guardia_Real** ejercitoLannister=inicializarLannister(10);

	//TARGARYEN
	Targaryen* targaryen;
	Dragones* DRAG;
	Dragones** ejercitoTargaryen=inicializarTargaryen(10);

	do
	{
		switch(opc=menuInicio()){

			case 1:
				switch(opcF=menuFamily()){

					case 1:
						switch(opcFam=menuFamilias()){

							case 1:
								if (creaS==1)
								{
									cout<<"Familia Ya Creada"<<endl;
								}
								else{
									stark=newStarks();
									stark->toString();
									creaS=1;
								}
								break;

							case 2:
								if (creaL==1)
								{
									cout<<"Familia Ya Creada"<<endl;
								}
								else{
									lannister=newLannister();
									lannister->toString();
									creaL=1;
								}
								break;

							case 3:
								if (creaT==1)
								{
									cout<<"Familia Ya Creada"<<endl;
								}
								else{
									targaryen=newTargaryen();
									targaryen->toString();
									creaT=1;
								}
								break;
						}
						opcFam=0;
						break;

					case 2:
						switch(opcFam=menuFamilias()){

							case 1:
								if (creaS==-1)
								{
									cout<<"Familia No Creada"<<endl;
								}
								else{
									PFN=newPFN();
									PFN->toString();
									readEjercitoStark(ejercitoStark,10,cont_PFN);
									cont_PFN++;
								}
								break;

							case 2:
								if (creaL==-1)
								{
									cout<<"Familia No Creada"<<endl;
								}
								else{
									GR=newGR();
									GR->toString();
									readEjercitoLannister(ejercitoLannister,10,cont_GR);
									cont_GR++;
								}
								break;

							case 3:
								if (creaT==-1)
								{
									cout<<"Familia No Creada"<<endl;
								}
								else{
									DRAG=newDrag();
									DRAG->toString();
									readEjercitoTargaryen(ejercitoTargaryen,10,cont_DRAG);
									cont_DRAG++;
								}
								break;
						}
						opcFam=0;
						break;

					case 3:
						//listar
						switch(opcFam=menuFamilias()){

							case 1:
								cout<<endl;
								for (int i = 0; i < 10; ++i)
								{
									ejercitoStark[i]->toString();
								}
								break;

							case 2:
								cout<<endl;
								for (int i = 0; i < 10; ++i)
								{
									ejercitoLannister[i]->toString();
								}
								break;

							case 3:
								cout<<endl;
								for (int i = 0; i < 10; ++i)
								{
									ejercitoTargaryen[i]->toString();
								}
								break;
						}
						opcFam=0;
						break;
				}

				break;

			case 2:
			//simulacion
				break;

			case 3:
			delete stark;
			delete PFN;
			delete lannister;
			//delete GR;
			delete targaryen;
			delete DRAG;
			cout<<"Saliendo"<<endl;
				break;

		}
	} while (opc!=3);
	return 0;
}

int menuInicio(){//inicio metodo menu
    while(true){
        cout<<"\nMENU Inicio"<<endl
        <<"1.- Familias"<<endl
        <<"2.- Simulacion"<<endl
		<<"3.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

int menuFamilias(){//inicio metodo menu
    while(true){
        cout<<"\nMENU FAMILIAS"<<endl
        <<"1.- Starks"<<endl
        <<"2.- Lannister"<<endl
		<<"3.- Targaryen"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

int menuFamily(){//inicio metodo menu
    while(true){
        cout<<"\nMENU ADMIN. FAMILIAS"<<endl
        <<"1.- Crear Familia"<<endl
        <<"2.- Crear Soldado"<<endl
		<<"3.- Listar Ejercito"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu


//STARKS

Starks* newStarks(){
	string jefe_familia, animal_emblema, lema;
	int cant_lobos, cant_integranes;
	Starks* stark;
	cout<<"Jefe de Familia: "<<endl;
	cin>>jefe_familia;
	cout<<"Animal Emblema: "<<endl;
	cin>>animal_emblema;
	cout<<"Lema: "<<endl;
	cin>>lema;
	cout<<"Cantidad de Lobos: "<<endl;
	cin>>cant_lobos;
	cout<<"Cantidad de Integrantes: "<<endl;
	cin>>cant_integranes;
	stark = new Starks(jefe_familia,animal_emblema,lema,cant_lobos,cant_integranes);
	return stark;
}

Pequenia_Familia_Noble* newPFN(){
	string nombre, simbolo, lema;
	int ataque,defensa;
	Pequenia_Familia_Noble* PFN;
	cout<<"Nombre: "<<endl;
	cin>>nombre;
	cout<<"Simbolo: "<<endl;
	cin>>simbolo;
	cout<<"Lema: "<<endl;
	cin>>lema;
	cout<<"Ataque: "<<endl;
	cin>>ataque;
	cout<<"Defensa: "<<endl;
	cin>>defensa;
	PFN= new Pequenia_Familia_Noble(nombre,simbolo,lema,ataque,defensa);
	return PFN;
}

void readEjercitoStark(Pequenia_Familia_Noble** array,int size,int pos){//inicio read array
	if (pos==9)
	{
		cout<<"Ejercito LLeno"<<endl;
	}
	else{
		for(int i=pos; i<size;i++){
			array[i]= new Pequenia_Familia_Noble();
		}
	}
}//fin read array

Pequenia_Familia_Noble** inicializarStark(int size){//inicio inicializar
	Pequenia_Familia_Noble** retval = new Pequenia_Familia_Noble*[size];
	return retval;
}//fin inicializar


//LANNISTER

Lannister* newLannister(){
	string jefe_familia, animal_emblema, lema, fuerza_montania;
	int cant_dinero, cant_integranes;
	Lannister* lannister;
	cout<<"Jefe de Familia: "<<endl;
	cin>>jefe_familia;
	cout<<"Animal Emblema: "<<endl;
	cin>>animal_emblema;
	cout<<"Lema: "<<endl;
	cin>>lema;
	cout<<"Fuerza de la Montania: "<<endl;
	cin>>fuerza_montania;
	cout<<"Cantidad de Dinero: "<<endl;
	cin>>cant_dinero;
	cout<<"Cantidad de Integrantes: "<<endl;
	cin>>cant_integranes;
	lannister = new Lannister(jefe_familia,animal_emblema,lema,fuerza_montania,cant_dinero,cant_integranes);
	return lannister;
}

/*Pequenia_Familia_Noble* newPFN(){
	string nombre, simbolo, lema;
	int ataque,defensa;
	Pequenia_Familia_Noble* PFN;
	cout<<"Nombre: "<<endl;
	cin>>nombre;
	cout<<"Simbolo: "<<endl;
	cin>>simbolo;
	cout<<"Lema: "<<endl;
	cin>>lema;
	cout<<"Ataque: "<<endl;
	cin>>ataque;
	cout<<"Defensa: "<<endl;
	cin>>defensa;
	PFN= new Pequenia_Familia_Noble(nombre,simbolo,lema,ataque,defensa);
	return PFN;
}

void readEjercitoLannister(Guardia_Real** array,int size,int pos){//inicio read array
	if (pos==9)
	{
		cout<<"Ejercito LLeno"<<endl;
	}
	else{
		for(int i=pos; i<size;i++){
			array[i]= new Guardia_Real();
		}
	}
}//fin read array

Guardia_Real** inicializarStark(int size){//inicio inicializar
	Guardia_Real** retval = new Guardia_Real*[size];
	return retval;
}//fin inicializar*/

//TARGARYEN


Targaryen* newTargaryen(){
	string reina, animal_emblema, lema;
	int cant_barcos;
	Targaryen* targaryen;
	cout<<"Reina: "<<endl;
	cin>>reina;
	cout<<"Animal Emblema: "<<endl;
	cin>>animal_emblema;
	cout<<"Lema: "<<endl;
	cin>>lema;
	cout<<"Cantidad de Barcos: "<<endl;
	cin>>cant_barcos;
	targaryen = new Targaryen(reina,animal_emblema,lema,cant_barcos);
	return targaryen;
}

Dragones* newDrag(){
	string nombre, color, tamanio;
	int distancia_fuego,ataque,defensa;
	Dragones* DRAG;
	cout<<"Nombre: "<<endl;
	cin>>nombre;
	cout<<"Color: "<<endl;
	cin>>color;
	cout<<"Tamanio: "<<endl;
	cin>>tamanio;
	cout<<"Distancia de Fuego: "<<endl;
	cin>>distancia_fuego;
	cout<<"Ataque: "<<endl;
	cin>>ataque;
	cout<<"Defensa: "<<endl;
	cin>>defensa;
	DRAG= new Dragones(nombre,color,tamanio,distancia_fuego,ataque,defensa);
	return DRAG;
}

void readEjercitoTargaryen(Dragones** array,int size,int pos){//inicio read array
	if (pos==9)
	{
		cout<<"Ejercito LLeno"<<endl;
	}
	else{
		for(int i=pos; i<size;i++){
			array[i]= new Dragones();
		}
	}
}//fin read array

Dragones** inicializarTaegaryen(int size){//inicio inicializar
	Dragones** retval = new Dragones*[size];
	return retval;
}//fin inicializar