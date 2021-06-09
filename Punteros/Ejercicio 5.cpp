/* Ejercicio 5: Pedir al usuario N numeros, almacenarlos en un arreglo dinámico posteriormente 
ordenar los números en orden ascendente y mostrarlos en pantalla.
Nota: Utilizar cualquier método de ordenamiento. */



#include<iostream>
#include<conio.h>
#include<stdlib.h> //New y delete
using namespace std;

//Definimos Funciones
void pedirDatos();
void ordenarArreglo(int *,int);
void mostrarArreglo(int *, int);

//Definimos variables globales
int nElementos, *elemento;

int main()
{
	pedirDatos();
	ordenarArreglo(elemento,nElementos);
	mostrarArreglo(elemento,nElementos);
	
	
	delete[] elemento; //Liberar la memoria utilizada para el arreglo dinámico
	
	getch();
	return 0;
}


void pedirDatos()
{
	cout<<"Digite el numero de elementos del Arreglo: ";cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++)
	{
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>*(elemento+1); //elemento[i]
	}
}

void ordenarArreglo(int *elemento,int nElementos)
{
	int aux;
	
	//Ordenar el arreglo a traves del método Burbuja.
	for(int i=0;i<nElementos;i++)
	{
		for(int j=0;j<nElementos-1;j++)
		{
			if(*(elemento+j) >*(elemento+j+1))//elemento[j] > elemento[j+1]
			{
				aux = *(elemento +j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1)= aux;
				
			}
		}
	}
	
}

void mostrarArreglo(int *elemento, int nElementos)
{
	cout<<"\n\nMostrando arreglo ordenado: ";
	
	for(int i=0;i<nElementos;i++)
	{
		cout<<*(elemento+i)<<"  ";//elemento[i]
	}
	
}



