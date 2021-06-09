/* Ejercicio 3: Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto
y, a continuación añada texto en él hasta que el usuario decida */


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
	string nombreArchivo,texto;	
	char rpt;
	
	cout<<"Digite el nombre o la ubicacion del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::app); //Abrimos el archivo en modo añadir
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	
	do
	{
		//Vaciamos el buffer de memoria
		fflush(stdin);
		cout<<"Digite otra frase para añadir al fichero: ";
		getline(cin,texto);
		
		archivo<<texto<<endl;
		
		
		cout<<"Desean agregar otra frase? (s/n): ";
		cin>>rpt;
	}
	while((rpt == 'S') || (rpt =='s'));
	
	archivo.close(); //Cerramos el programa
}
