#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;


//Declaramos Funciones
void escribir();

int main()
{
	escribir();
	
	
	system("pause");
	return 0;
}

void escribir()
{
	ofstream archivo;
	
	archivo.open("prueba.txt",ios::out); //Abriendo el archivo
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"Hola que tal mi nombre es Luis Andres"<<endl;
	archivo<<"Añadimos mas contenido en C++";
	
	archivo.close(); //Cerrar el archivo
}
