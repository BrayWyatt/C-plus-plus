//Buscar Elementos de una lista


#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Definimos estructuras
struct Nodo{
int dato;
Nodo *siguiente;	
};


//Definimos Funciones
void menu();
void insertarLista(Nodo*&,int);
void mostrarLista(Nodo*);
void buscarLista(Nodo *,int); 

//Funciones Globales
	Nodo *lista = NULL;



//Metodo Main
int main()
{
	
	menu();
	
	
	getch();
	return 0;
}

void menu()
{
	int opcion,dato;
	
	do
	{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar los elementos de la lista\n";
		cout<<"3. Buscar los elementos de la lista\n";
		cout<<"4. Salir\n";
		cout<<"Opcion: ";cin>>opcion;
		
		switch(opcion)
		{
			case 1: cout<<"\nDigite un numero: ";cin>>dato;
					insertarLista(lista,dato);
					cout<<"\n";
					system("pause");
				    break;
				    
			case 2: mostrarLista(lista);
					cout<<"\n";
					system("pause");
					break;
					
			case 3: cout<<"\nDigite un número a buscar: ";cin>>dato;
					buscarLista(lista,dato);
					cout<<"\n";
					system("pause");			
			
			case 4: break;
		}
		system("cls");
	}
	while(opcion !=4);	
}


void insertarLista(Nodo *&lista,int n)
{
	Nodo *nuevo_nodo = new Nodo();	
	nuevo_nodo->dato =  n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL)&& (aux1->dato < n))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1)
	{
		lista = nuevo_nodo;	
	}
	else
	{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
	cout<<"\tElemento: "<<n<<"  Insertado a la lista correctamente\n";
}

void mostrarLista(Nodo *lista)
{
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL)
	{
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
		
}

void buscarLista(Nodo *lista,int n)
{
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual != NULL) && (actual->dato <= n))
	{
		if(actual ->dato == n)
		{
			band = true;
		}
		actual = actual->siguiente;
	}
	
	if(band == true)
	{
		cout<<"Elemento "<<n<<" Si ha sido encontrado en la lista\n";
	}
	else
	{
		cout<<"Elemento "<<n<<" NO ha sido encontrado en la lista\n";
	}
	
}


