/*Ejercicio 2: Determinar si un número es primo o no; con punteros y ademas indicar en que posición
de memoria se guardo el número.

Ejemplo: 2,3,5,7,11,13,17,19,23,29,31... */

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int numero, *dir_numero,contador = 0;
	
	cout<<"\nDigite un numero: ";cin>>numero;
	dir_numero = &numero; //Guardando la posición de memoria
	
	for(int i=1;i<*dir_numero;i++)
	{
		if(*dir_numero%i==0)
		{
			contador++;
		}
		
	}
	
	if(contador>2)
	{
		cout<<" El numero "<<*dir_numero<<" No es Primo "<<endl;
		cout<<" Posicion: "<<dir_numero<<endl;
	}
	
	else
	{
		cout<<" El numero "<<*dir_numero<<" Es Primo "<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;	
	}
	
	

	getch();
	return 0;	
}
