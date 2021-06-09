/* Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una 
potencia en número entero positivo y despliegue resultado. El numero entero positivo deberá ser el 
segundo valor transmitido a la función */

#include<iostream>
#include<conio.h>
using namespace std;


//Funciones
void pedirDatos();
void funpot(int x, int y);


//Variables globales
int numero, exponente;


int main()
{
	pedirDatos();
	funpot(numero,exponente);
	
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite un numero: ";cin>>numero;
	cout<<"Digite el exponente de elevacion: ";cin>>exponente;	
}


void funpot(int x, int y)
{
	long resultado = 1;
	for (int i=1;i<=y;i++)
	{
		resultado = resultado * x;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
}

