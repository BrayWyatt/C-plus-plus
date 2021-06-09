/*Ejercicio 2: Crear una lista que almacene "n" numeros reales y calcule su suma y su promedio de
estos,. */

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

//Definimos las estructuras
struct Nodo
{
	float dato;
	Nodo *lista = NULL;
};


//Definimos las funciones
void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

//Metodo main
int main()
{
	Nodo *lista = NULL;	
	float dato;
	char respuesta;
	
	do
	{
		cout<<"Digite un numero: ";cin>>dato;
		insertarLista(lista,dato); //Insertamos el numero en la lista
		
		cout<<"Desea  agregar un nuevo elemento en lista(s/n)";cin>>respuesta;
	}
	while(respuesta == 's' || respuesta == 'S');
	
	cout<<"\nElementos de la lista: \n";
	mostrarLista(lista);
	
	calcularSumaPromedio(lista);
	
	getch();
	return 0;
}

//Agregar elementos a la lista
void insertarLista(Nodo *&lista,float n)
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

//Funcion para calcular la Suma y el promedio de los elementos de la lista
void calcularSumaPromedio(Nodo *)
{
	float suma=0,promedio;
	int contador =0;
	
	while(lista != NULL) //mientras no sea el final de la lista
	{
		suma += lista->dato; //Suma iterativa 
		contador++; //contar el numero de elementos de la lista
		lista = lista->siguiente;//avanzar en lista	
	}
	promedio = suma/contador;
	
	cout<<"\n\\nLa suma es: "<<suma<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
	
	
}


	
