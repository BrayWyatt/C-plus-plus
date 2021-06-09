/* 4. Hacer una matriz preguntando al usuario el numero de filas y columnas
llenarla de números aleatorios,copiar el contenido a otra matriz y por ultimo
mostrarla en pantalla */


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

int numeros[100][100],dato,nfilas,ncol;

cout<<"Digite el numero de filas: ";cin>>nfilas;
cout<<"Digite el numero de columnas: ";cin>>ncol;


//Generar numeros aleatorios
srand(time(NULL));

	//Rellenao la matriz de numeros aleatorios.
	for(int i=0;i<nfilas;i++)
	{
		for(int i=0;i<ncol;i++)
		{
		  dato =1+rand()%(100);  //Generando numeros aleatorios (1-100)
		  numeros[i][j] = dato;	
		}	
	}


	//Copianddo el contenido a otra matriz
	for(int i=0;i<nfilas;i++)
	{
		for(int i=0;i<ncol;i++)
		{
			numeros2[i][j] = numeros[i][j];
		}
	}
	
	
	//Imprimendo matriz numeros2 en pantalla
	for(int i=0;i<nfilas;i++)
	{
		for(int i=0;i<ncol;i++)
		{
			cout<<numeros2[i][j]<<"  ";
		}
		cout<"\n";	
	}
	
getch();
return 0;	
}
