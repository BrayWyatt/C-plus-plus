/* Ejercicio 6: Hacer una funci�n para almacenar  N n�meros en un arreglo din�mico, posteriormente
en otra funci�n buscar un n�mero en particular.

Nota: Puedes utilizar cualquier m�todo de b�squeda (Secuencial o Binaria).*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> //New y delete
using namespace std;

//Definimos Funciones
void pedirDatos();
void buscarElemento(int *, int);



//Definimos variables globales
int nElementos, *elemento;



int main()
{
	pedirDatos();
	buscarElemento(elemento, nElementos);//Llmando a la funci�n para buscar un elemento del arreglo
	
	delete[] elemento; //Liberamos la memoria utilizada para el arreglo
	
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


void buscarElemento(int *elemento, int nElementos)
{
	int dato,i;
	bool band = false;
	
	cout<<"\n\nDigite un numero a buscar:  ";
	cin>>dato;
	
	
	//B�squeda Secuencial
	i=0;
	while((i<nElementos)&&(band == false))
	{
		if(*(elemento+i) == dato)
		{
			band = true;
		}
		i++;
	}
	
	if(band == false)
	{
		cout<<"El numero "<<dato<<" NO existe en el arreglo"<<endl;
	}
	else
	{
		cout<<"El numero "<<dato<<"SI  existe en el arreglo, Posicion: "<<i-1<<endl;
	}
		
}


