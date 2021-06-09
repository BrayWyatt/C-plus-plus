/* Ejercicio 11: Realice una función que tome como parámetro un vector de números enteros y devuelva
la suma de sus elementos. */

#include<iostream>
#include<conio.h>
using namespace std;

//Defincición de Función
void pedirDatos();
int calcularSuma(int vec[], int);

//Definimos el vector y la variable
int vec[100],tam;





int main()
{
	pedirDatos();
	
	cout<<"La suma de los elementos del vector es: "<<calcularSuma(vec,tam)<<endl;
	
	
	
	
	getch();
	return 0;
}



void pedirDatos()
{

	cout<<"Digite el numero de elements del vector: ";cin>>tam;
	
	for(int i=0;i<tam;i++)
	{
		cout<<i+1<<". Digite un numero: ";cin>>vec[i];
	}
		
	
}

int calcularSuma(int vec[], int tam)
{
	int suma;
	
		for(int i=0;i<tam;i++)
		{
			suma += vec[i];
		}
	return suma;
}
