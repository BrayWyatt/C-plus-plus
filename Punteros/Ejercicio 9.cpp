/* Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas. */

#include<iostream>
#include<conio.h>
#include<stdlib.h> //new y delete
using namespace std;

//Definimos Funciones
void pedirDatos();
void sumarMatriz(int **,int **,int,int);
void mostrarMatrizResultado(int **,int,int);
//Definimos variables globales
int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;


int main()
{
	pedirDatos();
	sumarMatriz(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizResultado(puntero_matriz1,nFilas,nCol);
	
	//Liberar la memoria utilizada en matriz2
	for(int i=0;i<nFilas;i++)
	{
		delete[] puntero_matriz2[i];
	}
	delete [] puntero_matriz2;
	
	
	//Liberar la memoria utilizada en matriz1
	for(int i=0;i<nFilas;i++)
	{
		delete[] puntero_matriz1[i];
	}
	delete [] puntero_matriz1;
	
	
	getch();
	return 0;
	
}


void pedirDatos()
{
	cout<<"Digite el numero de Filas: ";cin>>nFilas;
	cout<<"Digite el numero de Columnas: ";cin>>nCol;	
	
	//Reservando memoria para la primera matriz
	puntero_matriz1 = new int *[nFilas]; //Reservar mmeoria para las filas
	
	for(int i=0;i<nFilas;i++)
	{
		puntero_matriz1[i] = new int[nCol]; //Reservar memoria para las columnas
	}
	
	cout<<"\nDigite los elementos de la primera matriz: \n";
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
			cout<<"Digite un numero["<<i<<"]["<<j<<"]:  ";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	
		//Reservando memoria para la segunda matriz
	puntero_matriz2 = new int *[nFilas]; //Reservar mmeoria para las filas
	
	for(int i=0;i<nFilas;i++)
	{
		puntero_matriz2[i] = new int[nCol]; //Reservar memoria para las columnas
	}
	
	cout<<"\nDigite los elementos de la segunda matriz: \n";
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
			cout<<"Digite un numero["<<i<<"]["<<j<<"]:  ";
			cin>>*(*(puntero_matriz2+i)+j); //puntero Matriz [i][j]
		}
	}
	
}

void sumarMatriz(int **puntero_matriz1,int **puntero_matriz2,int nFilas,int nCol)
{
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
		}
	}
	
}

void mostrarMatrizResultado(int **puntero_matriz1,int nFilas,int nCol)
{
	cout<<"\nLa suma de las 2 matrices es : \n";
	
		for(int i=0;i<nFilas;i++)
		{
			for(int j=0;j<nCol;j++)
			{
				cout<<*(*(puntero_matriz1+i)+j)<<"  "; //Puntero_matriz[i][j]
			}
			cout<<"\n";
		}	
}





