/* Ejercicio 5: Crear un archivo binario donde almacenar un Registro que contenga las pulsaciones de
un atleta en una determinada hora, el programa debe tener un menu con las siguientes opciones:

	1- Comenzar a digitar las pulsaciones.
	2- Añadir mas pulsaciones
	3- Mostrar las pulsaciones registradas
	4- salir del programa
*/

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//Definimos funciones
void menu();
void escribirPulsacion();
void annadirPulsaciones();
void mostrarPulsaciones();

//Definimos estructuras de datos -> funcion struc
struct Registro{
	float hora;
	int pulsaciones;
};


//Funcion main

int main()
{ 
   menu();
	
	//getch();
	return 0;
}
void menu()
{
	int opcion;
	
	do
	{
		cout<<"\t.:MENU:."<<endl;	
		cout<<"1- Comenzar a digitar las pulsaciones."<<endl;
		cout<<"2- Añadir mas pulsaciones"<<endl;
		cout<<"3- Mostrar las pulsaciones registradas"<<endl;
		cout<<"4- salir del programa"<<endl;
		cout<<"Digite una Opcion del menu:  ";cin>>opcion;
		
		switch(opcion)
		{
			case 1: escribirPulsacion();
			break;	
			
			case 2: annadirPulsaciones();
			break;
			
			case 3: mostrarPulsaciones();
			break;
					
			case 4:
			break;
			
			default: cout<<"Se equivoco de opcion de menu"<<endl;
		}
		//system("pause");
		system("cls");
		
	}
	while(opcion !=4);
}

void escribirPulsacion()
{
	ofstream archivoB;
	
	
	archivoB.open("pulsaciones.dat",ios::out | ios::binary);	
	
	if(archivoB.fail())
	{
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\nDigite la hora: ";cin>>pulso.hora;
	cout<<"Digite la cantidad de pulsaciones: ";cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso,sizeof(Registro));
	
	archivoB.close();

}

void annadirPulsaciones()
{
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::app | ios::binary);	
	
		if(archivoB.fail())
	{
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\nDigite la hora: ";cin>>pulso.hora;
	cout<<"Digite la cantidad de pulsaciones: ";cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso,sizeof(Registro));
	
	archivoB.close();	
}

void mostrarPulsaciones()
{
		ifstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::in | ios::binary);	
	
		if(archivoB.fail())
	{
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	while(!archivoB.eof())
	{
		archivoB.read((char *)&pulso,sizeof(Registro));
		
			if(!archivoB.eof())
			{
				cout<<"Hora: "<<pulso.hora<<endl;
				cout<<"Pulsaciones"<<pulso.pulsaciones<<endl<<endl;
			}
		
	}
	archivoB.close();
	
}
