/* Ejercicio 2: Hcaer un programa en C++, utilizando Pilas que contenga el siguiente menu:

1- Insertar un carácter a la pila
2- Mostrar todos los elementos de la Pila
3- Salir

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Declaramos la estrutura de la pila que empieza como nodo
struct Nodo
{
	char dato;
	Nodo *siguiente;
};


//Definimos Funciones
void menu();
void agregarPila(Nodo *&,char);
void sacarPila(Nodo *&,char&);

//Funcion Main
int main()
{
	 menu();

	
	

	getch();
	return 0;
}

void menu()
{
	Nodo *pila =NULL;
	int opcion;
	char dato;
	do
	{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar un carácter a la pila"<<endl;
		cout<<"2. Mostrar todos los elementos de la Pila"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";cin>>opcion;	
		
		switch(opcion)
		{
			case 1: cout<<"\nDigite un caracter: ";
			cin>>dato;	
			agregarPila(pila,dato);
			break;
					
			case 2: cout<<"\nMostrando todos los elementos de la pila: ";
						while(pila != NULL)
						{
							sacarPila(pila,dato);
							if(pila != NULL)
							{
								cout<<dato<< "  ,  ";
							}
							else
							{
								cout<<dato<<" . ";
							}
				    	}
				    	system("pause");
				    	break;
				
		   case 3: break;
		}
		
		system("cls");//Limpiar Pantalla
	}while(opcion != 3);
	
}


void agregarPila(Nodo *&pila,char n)
{
	Nodo *nuevo_nodo = new Nodo(); ////1 Crear el espacio en memoria para alamacenar los datos.
	nuevo_nodo->dato = n; //2. Cargar el valor de dentro del nodo(dato)
	nuevo_nodo->siguiente = pila; //3. Cargar el puntero pila dentro del nodo(siguiente)
	pila = nuevo_nodo; //4. Asignar el nuevo nodo a la pila.
	
}

void sacarPila(Nodo *&pila,char &n)
{
	Nodo *aux = pila;
	n  = aux->dato;
	pila = aux->siguiente;
	delete aux;	
}






