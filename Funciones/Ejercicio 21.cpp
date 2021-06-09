/* Ejercicio 21: Escriba una función recursiva que calcule un número elevado a una potencia entera 
mayor o igual que cero: x^y. */



/*Ejemplo

	potencia(x,y) = x
					x*potencia(x,y-1)
									,y=1
									,y>1
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Definimos la Función
int potencia(int, int);

int main()
{
	int base,exponente;
	//Pedir datos al usuario
	cout<<"Digite la base: ";cin>>base;
	cout<<"Digite el exponente: ";cin>>exponente;
	
	
	cout<<"\n\nLa potencia de "<<base<<"elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	
	getch();
	return 0;
}


int potencia(int x, int y)
{
	int pot;
	//Caso Base
	if(y==1)
	{
		pot = x;
	}
	//Caso General
	else
	{
		pot = x * potencia(x,y-1);
	}
	
	return pot;
}



