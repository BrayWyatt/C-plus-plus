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
	string nombreArchivo,frase;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out);//abrimos el fichero
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Digite el texto del archivo: ";
	getline(cin,frase);
	
	archivo<<frase;
	

	archivo.close(); //Cerrar el archivo
}
