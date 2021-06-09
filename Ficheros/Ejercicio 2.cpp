/* Ejercicio 2: Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto
y, a continuación de lectura a todo el fichero. */

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

//Definimos las funciones
void lectura();

int main()
{
	lectura();
	
	system("pause");
	return 0;
}

void lectura()
{
	//Definicion de variables
	ifstream archivo;
	string  nombreArchivo,texto;
	
	
	cout<<"Digite el nombre o la ubicación del archivo o fichero: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::in); //Abrimos el archivo en modo lectura
	
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()) //Mientras no sea el final del archivo
	{
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el programa
	
	
}



