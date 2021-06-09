/* Ejercicio 9. Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamada
totalSeg y tres parámetros de referencia enteros nombrados horas, min y seg. La función es convertir el
número de segundos transmitido en un número equivalente de horas, minutos y segundos. */


#include<iostream>
#include<conio.h>
using namespace std;

//Definición de Funciones
void tiempo(int,int&,int&,int&);



int main()
{
	int totalSeg,horas,minutos,segundos;
	
	cout<<"Digite el numero total de segundos: ";
	cin>>totalSeg;
	
	
	tiempo(totalSeg, horas,minutos,segundos);
	
	cout<<"\nTiempo equivalente a la cantidad de segundos digitados: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos "<<minutos<<endl;
	cout<<"Segundos: "<<segundos<<endl;
	
	
	
	
	
	
	getch();
	return 0;
}

void tiempo(int totalSeg, int& horas, int& minutos, int& segundos)
{
	horas = totalSeg/3600;
	totalSeg %=3600;
	minutos = totalSeg/60;
	segundos = totalSeg%60;
	
	
}
