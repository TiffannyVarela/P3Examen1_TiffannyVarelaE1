#include <iostream>
#include <string>
#include "Starks.h"
#include "Pequenia_Familia_Noble.h"
using namespace std;

int menuInicio();
int menuFamily();
int menuFamilias();

int main(int argc, char const *argv[])
{
	int creaS=-1, creaL=-1,creaT=-1;
	int opc=0,opcF=0;;

	do
	{
		switch(opc=menuInicio()){

			case 1:
				switch(opcF=menuFamily()){

					case 1:
						break;

					case 2:
						break;

					case 3:
						break;

				}
				
				break;

			case 2:
				break;

			case 3:
			cout<<"Saliendo"<<endl;
				break;

		}
	} while (opc!=3);
	return 0;
}

int menuInicio(){//inicio metodo menu
    while(true){
        cout<<"MENU"<<endl
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
        cout<<"MENU"<<endl
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
        cout<<"MENU"<<endl
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