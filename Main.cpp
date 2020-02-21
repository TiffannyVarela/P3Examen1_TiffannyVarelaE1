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
void readEjercitoStark(Pequenia_Familia_Noble**,int ,int, Pequenia_Familia_Noble*);
Pequenia_Familia_Noble** inicializarStark(int);

//LANNISTER
Lannister* newLannister();
Guardia_Real* newGR();
void readEjercitoLannister(Guardia_Real**,int ,int,Guardia_Real*);
Guardia_Real** inicializarLannister(int);

//TARGARYEN
Targaryen* newTargaryen();
Dragones* newDrag();
void readEjercitoTargaryen(Dragones**,int ,int,Dragones*);
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
									readEjercitoStark(ejercitoStark,10,cont_PFN,PFN);
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
									readEjercitoLannister(ejercitoLannister,10,cont_GR,GR);
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
									readEjercitoTargaryen(ejercitoTargaryen,10,cont_DRAG,DRAG);
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

void readEjercitoStark(Pequenia_Familia_Noble** array,int size,int pos, Pequenia_Familia_Noble* PFN){//inicio read array
	if (pos==9)
	{
		cout<<"Ejercito LLeno"<<endl;
	}
	else{
		array[pos]=PFN;
		for(int i=pos+1; i<size;i++){
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

Guardia_Real* newGR(){//edicion del tipo
	string nombre;
	int edad, tipo,ataque,defensa;
	Guardia_Real* GR;
	cout<<"Nombre: "<<endl;
	cin>>nombre;
	cout<<"Edad: "<<endl;
	cin>>edad;
	cout<<"Ataque: "<<endl;
	cin>>ataque;
	cout<<"Defensa: "<<endl;
	cin>>defensa;
	cout<<"Tipo\n 1.Caballero\n 2.Jinete\n 3.Arquero\n"<<endl;
	cin>>tipo;
	if (tipo==1)
	{
		GR= new Guardia_Real(nombre,Guardia_Real::Caballero,edad,ataque,defensa);
	}
	if (tipo==2)
	{
		GR= new Guardia_Real(nombre,Guardia_Real::Jinete,edad,ataque,defensa);
	}
	if (tipo==3)
	{
		GR= new Guardia_Real(nombre,Guardia_Real::Arquero,edad,ataque,defensa);
	}
	return GR;
}

void readEjercitoLannister(Guardia_Real** array,int size,int pos, Guardia_Real* GR){//inicio read array
	if (pos==9)
	{
		cout<<"Ejercito LLeno"<<endl;
	}
	else{
		array[pos]=GR;
		for(int i=pos+1; i<size;i++){
			array[i]= new Guardia_Real();
		}
	}
}//fin read array

Guardia_Real** inicializarLannister(int size){//inicio inicializar
	Guardia_Real** retval = new Guardia_Real*[size];
	return retval;
}//fin inicializar

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

void readEjercitoTargaryen(Dragones** array,int size,int pos, Dragones* DRAG){//inicio read array
	if (pos==9)
	{
		cout<<"Ejercito LLeno"<<endl;
	}
	else{
		array[pos]=DRAG;
		for(int i=pos+1; i<size;i++){
			array[i]= new Dragones();
		}
	}
}//fin read array

Dragones** inicializarTargaryen(int size){//inicio inicializar
	Dragones** retval = new Dragones*[size];
	return retval;
}//fin inicializar

//SIMULACION

void Simulacion(Pequenia_Familia_Noble** stark, Guardia_Real** lannister, Dragones** targaryen, int cont_PFN, int cont_GR, int cont_DRAG){
	int opc1, opc2;
	int s=0,l=0,t=0;
	int 
	cout<<"Elija la Primera Familia: ";
	opc1=menuFamilias();
	if (opc1==1 && cont_PFN!=0)
	{
		s=1;
	}
	if (opc1==2 && cont_GR!=0)
	{
		l=1;
	}
	if (opc1==3 && cont_DRAG!=0)
	{
		t=1;
	}
	else{
		cout<<"Casa no creada o sin ejercito"<<endl;
	}
	cout<<"Elija la Segunda Familia: ";
	opc2=menuFamilias();

	if (opc2==1 && s==1 || cont_PFN==0)
	{
		cout<<"Opcion ya usada o casa sin ejercito"<<endl;
	}

	if (opc2==2 && l==1 || cont_GR==0)
	{
		cout<<"Opcion ya usada o casa sin ejercito"<<endl;
	}

	if (opc2==3 && t==1 || cont_DRAG==0)
	{
		cout<<"Opcion ya usada o casa sin ejercito"<<endl;
	}
	else{
		cout<<"Iniciando"<<endl;
		if (s==1 && l==1)
		{
			/* code */
		}
		if (s==1 && t==1)
		{
			/* code */
		}
		if (t==1 && l==1)
		{
			/* code */
		}
	}

}