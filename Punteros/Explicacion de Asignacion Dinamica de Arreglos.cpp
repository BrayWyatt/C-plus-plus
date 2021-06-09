/* Asignación dinamica de arreglos */

/*
new: Reserva el número de butyes solicitado por la declaración
delete: Libera un bloque de buyes reservad con anterioridad

numeros[10];

Ejemplo: Perdir al usuario n calificaciones y almacenarlas en un arreglo dinámico. */

#include<iostream>
#include<conio.h>
#include<stdlib.h>//Import que se usa para traer a New y Delete en Asignanicón Dinámica
using namespace std;


//Declaramos una función
void pedirNotas();
void mostrarNotas();


//Declaración de Variables Globales
int numCalificaciones,*calif;



int main()
{
	pedirNotas();
	mostrarNotas();
	
	delete[] calif; //Liberando el espacio en Bytes utilizado anteriormente
	
	getch();
	return 0;
}


void pedirNotas()
{
	cout<<"Digite el numero de calificaciones: ";cin>> numCalificaciones;
	
	calif = new int [numCalificaciones];//Crear el arreglo
	
	for(int i=0;i<numCalificaciones;i++)
	{
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	}
		
}

void mostrarNotas()
{
	cout<<"\nMostrando notas del Usuario:\n";
	
	for(int i=0;i<numCalificaciones;i++)
	{
		cout<<calif[i]<<endl;
	}
	
}



