/* Ejercicio 13: Realiza una funci�n que tome como par�metros un vector de n�meros y su tama�o y 
cambie el signo de los elementos del vector. */




#include<iostream>
#include<conio.h>
using namespace std;


//Defincici�n de Funci�n
void pedirDatos();
void cambiarSigno(int vec[],int);
void mostrarVector(int vec[],int);



//Definimos el vector y la variable
int vec[100],tam;

int main()
{
	pedirDatos();
	cambiarSigno(vec,tam);
	mostrarVector(vec,tam);
		
	getch();
	return 0;
}

void pedirDatos()
{

	cout<<"Digite el numero de elementos del vector: ";cin>>tam;
	
	for(int i=0;i<tam;i++)
	{
		cout<<i+1<<". Digite un numero: ";cin>>vec[i];
	}
			
}


void cambiarSigno(int vec[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		vec[i] *= -1;
	}
	
}

void mostrarVector(int vec[],int tam)
{
	cout<<"\nMostrando los elementos del vector con signo cambiado\n";
		for(int i=0;i<tam;i++)
		{
			cout<<vec[i]<<" ";
		}
}

