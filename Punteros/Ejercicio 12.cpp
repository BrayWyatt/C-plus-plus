/*Ejercicio 12: Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una
etapa. La estructura debe tener 3 campos: Horas, Minutos, Segundos. Escriba un programa que dado 
3 etapas calcule el tiempo total empleado en correr todas las etapas. 

Nota: Usar Punteros */



#include<iostream>
#include<conio.h>
using namespace std;

//Definimos la estructura
struct Etapa{
	int horas,min,seg;
}etapas[3], *puntero_etapa = etapas;

//Declaramos la Función
void pedirDatos();
void calcularTiempo(Etapa *);

int main()
{
	pedirDatos();
	calcularTiempo(puntero_etapa);
	
	getch();
	return 0;	
}

void pedirDatos()
{
	cout<<"Digite los tiempos empleados: \n";
	for(int i=0;i<3;i++)
	{
		cout<<"Horas: ";cin>>(puntero_etapa+i)->horas;
		cout<<"Minutos: ";cin>>(puntero_etapa+i)->min;
		cout<<"Segundos: ";cin>>(puntero_etapa+i)->seg;
		cout<<"\n";
	}
	
}


void calcularTiempo(Etapa *puntero_etapa)
{
	int horaT=0;
	int minutosT=0;
	int segundosT=0;
	
	for(int i=0;i<3;i++)
	{
		horaT += horaT +(puntero_etapa+i)->horas;
		minutosT +=(puntero_etapa+i)->min;
		if(minutosT >=60)
		{
			minutosT -= 60;
			horaT++;
		}
	segundosT += (puntero_etapa+i)->seg;	
		if(segundosT >= 60)
		{
			segundosT -=60;
			minutosT++;
		}
	
	}
	
	cout<<"\nMostrando el tiempo total: \n";
	cout<<"Horas: "<<horaT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
}




