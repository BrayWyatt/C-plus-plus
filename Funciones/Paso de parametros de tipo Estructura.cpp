//Paso de Par�metros de tipo estructura

#include<iostream>
#include<conio.h>
using namespace std;


//Definimos Estructura
struct Persona{
	char nombre[30];
	int edad;
}p1;


//Definimos Funciones
void pedirDatos();
void mostrarDatos(Persona);



int main()
{
	pedirDatos();
	mostrarDatos(p1);
	
	getch();
	return 0;
}



void pedirDatos()
{
	cout<<"Digite su nombre: ";cin.getline(p1.nombre,30,'\n');
	cout<<"Digite su edad: ";cin>>p1.edad;	
}

void mostrarDatos(Persona p)
{
	cout<<"\n\nNombre:  "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
	
}
