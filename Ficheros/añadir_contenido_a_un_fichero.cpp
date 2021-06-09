// Añadir texto al final de un archivo

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

//Definimos Funciones
void anadir();

int main()
{
	anadir();	
	
	system("pause");
	return 0;
}

void anadir()
{
	ofstream archivo;	
	
	archivo.open("programacion.txt",ios::app); //Abrimos el archivo en modo añadir
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"Añadimos mas contenido al texto"<<endl;
	
	archivo.close(); //Cerramos el programa
}
