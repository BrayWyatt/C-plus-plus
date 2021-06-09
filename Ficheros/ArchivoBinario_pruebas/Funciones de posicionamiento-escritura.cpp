//Funciones de posicionamiento - escritura

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;


//Definimos funciones
void escribir();
void leer();


int main()
{ 
    escribir();
	leer();
	
	return 0;
}

void escribir()
{
	ofstream archivo;
	
	archivo.open("posicion.txt",ios::out);
	
	if(archivo.fail())
	{
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	//Muestra la posicion actual donde este el cursor en mi archivo
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	archivo<<"Buen dia para programar c++";
	
	//Posiciona el cursor en N para escribir a partir de ahi.
	//archivo.seekp(32);
	
	
	//archivo<<"Si tengo ganas de programar de nuevo en c++";
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	
	archivo.close();
	
}


void leer()
{
	ifstream archivo;
	
	archivo.open("posicion.txt",ios::in);
	
	
	if(archivo.fail())
	{
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	
	string linea;
	
	//Metodo para leer indicando la posicion en la que queremos empezar a leer
	archivo.seekg(5);
	
	//Metodo para ver en que posicion esta el porgrama
	cout<<"Posicion actual: "<<archivo.tellg()<<endl;
	
	getline(archivo,linea);
	
	cout<<linea<<endl;
	
	archivo.close();
	
}
