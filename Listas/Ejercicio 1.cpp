/* Ejercicio 1: Crear una lista que almacene "n" numeros enteros y calcular el menor y el mayor de
ellos.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

//Definimos las estructuras
struct Nodo
{
	int dato;
	Nodo *siguiente;
};


//Definimos las funciones
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

//Metodo main
int main()
{
	Nodo *lista = NULL;
	int dato;
	char respuesta;
	
	
	do
	{
		cout<<"Digite un numero: ";cin>>dato;
		insertarLista(lista,dato); //Agregando un nuevo elemento a la lista
		
		
		cout<<"Desea agregar otro nodo(s/n)";cin>>respuesta;
	}
	while(respuesta == 's' || respuesta == 'S');
	
	cout<<"\nElementos de la lista: \n";
	mostrarLista(lista);
	
	calcularMayorMenor(lista);
	
	
	
	
	
	getch();
	return 0;
}

//Agregar elementos a la lista
void insertarLista(Nodo *&lista,int n)
{
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL) //Si la lista esta vacia
	{
		lista = nuevo_nodo; //Agregamos el primer elemento a la lista.
	}
	else
	{
		aux = lista; //El puntero aux apunta al inicio de la lista
		
		while(aux->siguiente != NULL)//Recorremos la lista
		{
			aux = aux->siguiente; //Avanzamos posiciones en la lista
		}
		aux->siguiente = nuevo_nodo; //Agrego el nuevo Nodo a la lista
	}
	
	cout<<"\tElemento "<<n<<" Agregado a la lista Correctamente\n";	
}

//Mostrar todos los elementos de la lista

void mostrarLista(Nodo *lista)
{
	while(lista != NULL)//mientras no sea el final de la lista
	{
		cout<<lista->dato<<" -> ";
		lista = lista->siguiente; //avanzamos una posicion en la lista
	}	
	
}

//Calcular el mayor y menor elemento de la lista
void calcularMayorMenor(Nodo *lista)
{
	int mayor=0,menor=999999;
	
	while(lista != NULL) //recorremos la lista
	{
		if((lista->dato) > mayor) //Calculando el mayor elemento
		{
			mayor = lista->dato;
		}
		if((lista->dato) < menor) //Calculando el menor elemento
		{
			menor = lista->dato;
		}
		lista = lista->siguiente; //Avanzamos una posicion en lista
	}
	cout<<"\nEl mayor elemento es:  "<<mayor<<endl;
	cout<<"El menor elemento es:  "<<menor<<endl;
}


