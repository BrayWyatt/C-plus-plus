//Archivos Binarios

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

//Definimos funciones
void escribir();
void leer();


//Definimos estructuras de datos -> funcion struc
struct Registro{
	char nombre[20];
	char apellido[20];
};

//Funcion main
int main()
{
	escribir();
	leer();

	system("pause");
	return 0;
}

void escribir()
{
	ofstream archivoB;
	
	archivoB.open("prueba_binario.dat",ios::out | ios::binary);
	
	if(archivoB.fail())
	{
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	Registro persona;
	
	cout<<"Pidiendo datos"<<endl;
	cout<<"Digite un nombre: ";cin.getline(persona.nombre,20,'\n');
	cout<<"Digite un apellido: ";cin.getline(persona.apellido,20,'\n');
	
	//Escribimos los datos en mi archivo binario
	archivoB.write((char *)&persona,sizeof(Registro));
	
	archivoB.close(); //Cerramos el archivo
}

void leer()
{
	ifstream archivoB;
	
	archivoB.open("prueba_binario.dat",ios::in | ios::binary);
	
	
	if(archivoB.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	Registro persona;
	
	archivoB.read((char *)&persona,sizeof(Registro));
	
	cout<<"\n\nMostrando los datos leido"<<endl;
	cout<<"Nombre:  "<<persona.nombre<<endl;
	cout<<"Apeliido: "<<persona.apellido<<endl;
	
	archivoB.close(); //Cerramos el archivo
	
}
