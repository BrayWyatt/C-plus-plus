/* Ejercicio 9. Escriba una funci�n nombrada tiempo() que tenga un par�metro en n�mero entero llamada
totalSeg y tres par�metros de referencia enteros nombrados horas, min y seg. La funci�n es convertir el
n�mero de segundos transmitido en un n�mero equivalente de horas, minutos y segundos. */


#include<iostream>
#include<conio.h>
using namespace std;

//Definici�n de Funciones
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
