/* Ejercicio 1: Hacer un programa para agregar números enteros a una pila, hasta que el usuario
lo decida, después mostrar todos los números introducidos en la pila */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Declaramos la estrutura de la pila que empieza como nodo
struct Nodo
{
	int dato;
	Nodo *siguiente;
};


//Definimos Funciones
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int&);



int main()
{
	Nodo *pila = NULL;
	int dato;
	char rpt;
	
	//Agregar elementos a la Pila
	do
	{
		cout<<"Digite un numero: ";cin>>dato;
		agregarPila(pila,dato);
		
		cout<<"\nDeseas agregar otro elemento a Pila(s/n): ";cin>>rpt;

	}
	while((rpt=='S')||(rpt=='s'));

	cout<<"\nSacando todos los elementos de Pila: ";
	while(pila !=NULL)//mientras no sea el final de la pila
	{
		sacarPila(pila,dato);	
		if(pila !=NULL)
		{
			cout<<dato<<"  ,  ";
		}
		else
		{
			cout<<dato<<" . ";	
		}
	}
	getch();
	return 0;
}
	
	
	




void agregarPila(Nodo *&pila,int n) 
{
	Nodo *nuevo_nodo = new Nodo(); ////1 Crear el espacio en memoria para alamacenar los datos.
	nuevo_nodo->dato = n; //2. Cargar el valor de dentro del nodo(dato)
	nuevo_nodo->siguiente = pila; //3. Cargar el puntero pila dentro del nodo(siguiente)
	pila = nuevo_nodo; //4. Asignar el nuevo nodo a la pila.
	
	cout<<"\tElemento "<<n<<"ha sido agregado a Pila correctamente";
}

void sacarPila(Nodo *&pila,int &n)
{
	Nodo *aux = pila;
	n  = aux->dato;
	pila = aux->siguiente;
	delete aux;	
}




