//Punteros a Estructuras

#include<iostream>
#include<conio.h>
using namespace std;

//Declaramos una estructura

struct Persona
{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;


//Declaramos la función
void pedirDatos(); 
void mostrarDatos(Persona *);
//Variables globales


int main()
{
	pedirDatos();
	
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite su nombre: ";cin.getline(puntero_persona->nombre,30,'\n');
	cout<<"Digite su edad:  ";cin>>puntero_persona->edad;
}


void mostrarDatos(Persona *puntero_persona)
{
	cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
	cout<<"Su edad es: "<<puntero_persona->edad<<endl;	
}







