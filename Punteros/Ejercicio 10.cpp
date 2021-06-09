/* Ejercicio 10: Realice un programa que lea una matriz dinámica de NxM y cree su matriz transpuesta.
Nota: La matriz transpuesta es aquella en la que la columna i era la fila de i de la matriz original.*/


/* Ejemplo:

/1 2 3/           /1 4 7/
/4 5 6/   ---->   /2 5 8/
/7 8 9/           /3 6 9/


*/



#include<iostream>
#include<conio.h>
#include<stdlib.h> //new y delete
using namespace std;

//Definimos Funciones
void pedirDatos();
void mostrarMatriz(int **,int,int);

//Definimos variables globales
int **puntero_matriz,nFilas,nCol;


int main()
{
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	
	//Liberar la memoria de la matriz
	for(int i=0;i<nFilas;i++)
	{
		delete [] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}


void pedirDatos()
{
	cout<<"Digite el numero de Filas: ";cin>>nFilas;
	cout<<"Digite el numero de Columnas: ";cin>>nCol;	
	
	//Reservando memoria para la primera matriz
	puntero_matriz = new int *[nFilas]; //Reservar mmeoria para las filas
	
		for(int i=0;i<nFilas;i++)
	{
		puntero_matriz[i] = new int[nCol]; //Reservar memoria para las columnas
	}
	
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
			cout<<"Digite un numero["<<i<<"]["<<j<<"]:  ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
	
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol)
{
	cout<<"Imprimiendo la matriz Original: \n";
	
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
			cout<<*(*(puntero_matriz+i)+j);
		}
		cout<<"\n";
	}
	
	
	
	
	cout<<"Imprimiendo la matriz Transpuesta: \n";
	
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
			cout<<*(*(puntero_matriz+j)+i);
		}
		cout<<"\n";
	}
		
}


