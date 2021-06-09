/* Matrices Dinámica */



/*
Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int] [int]
                    *puntero_fila -> [int] [int] [int]
					*puntero_fila -> [int] [int] [int]
					
					
					
1 2 3   1  -> 2 3
4 5 6   4  -> 5 6 
7 8 9	7  -> 8 9	

				*puntero_fila -> [int] [int]
				*puntero_fila -> [int] [int]
				*puntero_fila -> [int] [int]					
*/



#include<iostream>
#include<conio.h>
#include<stdlib.h> //new y delete
using namespace std;

//Definimos Funciones
void pedirDatos();
void mostrarMatriz(int **, int,int);

//Definimos variables globales
int **puntero_matriz,nFilas,nCol;


int main()
{
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	//Bucle para liberar memoria que hemos usado en la matriz
	for(int i=0;i<nFilas;i++)
	{
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	
	getch();
	return 0;
	
}


void pedirDatos()
{
	cout<<"Digite el numero de Filas: ";cin>>nFilas;
	cout<<"Digite el numero de Columnas: ";cin>>nCol;	
	
	//Reservar memoria para la matriz dinámica
	puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas
		for(int i=0;i<nFilas;i++)
		{
			puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
		}
		
		cout<<"\nDigitando los elementos de la matriz: \n";
		
			for(int i=0;i<nFilas;i++)
			{
				for(int j=0;j<nCol;j++)
				{
					cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";	
					cin>>*(*(puntero_matriz+i)+j);    
				}
			}	
}


void mostrarMatriz(int **punteroMatriz, int nFilas,int nCol)
{
	cout<<"\n\nImprimiendo Matriz: \n";
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
		cout<<*(*(puntero_matriz+i)+j)<<"  ";
		}
	}
}

