//Pedir al usuario que introduzca texto al final de un fichero

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
	string texto;	
	
	archivo.open("programacion.txt",ios::app); //Abrimos el archivo en modo a�adir
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Digite el texto que quiere anadir: ";
	getline(cin,texto);
	
	archivo<<texto<<endl;
	
	archivo.close(); //Cerramos el programa
}
