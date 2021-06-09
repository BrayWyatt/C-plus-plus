/* Ejercicio 4: Hacer un programa en C++. Para guardar numeros telefónicos que muestre un menu con 
las siguientes opciones:

	1- Crear(Nombre,apellido,telefono)
	2- Agregar mas contactos(nombre,apellido,telefono)
	3- Visualizar contactos existentes
*/


#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
using namespace std;

//Definimos Funciones
void menu();
void crearContacto();
void agregarContacto();
void visualizarContacto();


//Definimos una funcion struc
struct Datos{
	string nombre,apellido,telefono;
}datos;


//Funcion main
int main()
{
	menu();

	system("pause");
	return 0;
}

void menu()
{
	int opcion;
	
	
	do
	{
		cout<<"\tMENU"<<endl;
		cout<<"1. Crear Nuevos Contactos"<<endl;
		cout<<"2. Agregar mas Contactos"<<endl;
		cout<<"3. Visualizar contactos existentes"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";cin>>opcion;
		
		//Realizamos un switch/case
		switch(opcion)
		{
			case 1: crearContacto();
					cout<<"\n";
					system("pause");
			break;
			
			case 2: agregarContacto();
					cout<<"\n";
					system("pause");
			break;		
			
			case 3: visualizarContacto();
					cout<<"\n";
					system("pause");
			break;
			
					
			
			case 4: break;
			
			
		}
		system("cls");
		
	}
	while(opcion != 4);
	
}

void crearContacto()
{
	ofstream archivo;
	char rpt;
	
	archivo.open("Agenda_Telefonica.txt",ios::out); //Abrimos el archivo en modo escritura
	
	if(archivo.fail())
	{
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	archivo<<"\tAgenda Telefonica"<<endl;
	
	do
	{
	    //Vaciamos el buffer de memoria
		fflush(stdin);
		
		cout<<"Digite su nombre: ";
		getline(cin,datos.nombre);
		
		cout<<"Digite su apeliido: ";
		getline(cin,datos.apellido);
		
		cout<<"Digite su telefono: ";
		getline(cin,datos.telefono);
		
		cout<<"\n\n";
		
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
	cout<<"Desean agregar otra contacto? (s/n): ";
	cin>>rpt;
		
	}
	while((rpt == 'S') || (rpt =='s'));
	
	
	archivo.close(); //Cerramos el programa		
}


void agregarContacto()
{
	ofstream archivo;
	char rpt;
	
	archivo.open("Agenda_Telefonica.txt",ios::app); //Abrimos el archivo en modo añadir
	
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do
	{
		//Vaciamos el buffer de memoria
		fflush(stdin);
		
		cout<<"\nDigite su nombre: ";
		getline(cin,datos.nombre);
		
		cout<<"Digite su apeliido: ";
		getline(cin,datos.apellido);
		
		cout<<"Digite su telefono: ";
		getline(cin,datos.telefono);
		
		cout<<"\n\n";
		
		archivo<<"\nNombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		
		cout<<"Desean agregar otra contacto? (s/n): ";
	    cin>>rpt;
		
	}
	while((rpt == 'S') || (rpt =='s'));
	
	archivo.close(); //Cerramos el programa		
}

void visualizarContacto()
{
	ifstream archivo;
	string texto;
	
	archivo.open("Agenda_Telefonica.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()) //mientras no sea el final del archivo
	{
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close(); //Cerramos el programa	
}
