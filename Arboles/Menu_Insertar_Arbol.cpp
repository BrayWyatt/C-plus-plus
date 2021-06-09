/* Insertar Nodos en un arbol */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Definimos estructuras de Datos
struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;	
	Nodo *padre;
};

//Definimos el nodo arbol
Nodo *arbol = NULL;

//Definimos Funciones
void menu();
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&arbol,int,Nodo *);
void mostrarArbol(Nodo *,int);
bool  busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo*,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

//Funcion Main
int main()
{
	menu();
	
	getch();
	return 0;
}

//Funcion menu
void menu()
{
	int dato,opcion,contador=0;
	
	do
	{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostrar el arbol completo"<<endl;
		cout<<"3. Buscar un elemento en el arbol"<<endl;
		cout<<"4. Recorrer el arbol en PreOrden"<<endl;
		cout<<"5. Recorrer el arbol en InOrden"<<endl;
		cout<<"6. Recorrer el arbol en PostOrden"<<endl;
		cout<<"7. Eliminar un nodo del arbol"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Opcion: ";cin>>opcion;
		
		switch(opcion)
		{
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertarNodo(arbol,dato,NULL); //Insertar un nuevo Nodo
					cout<<"\n";
					system("pause");
					break;	
					
					
			case 2: cout<<"\nMostrando el arbol completo:\n\n";
					mostrarArbol(arbol,contador);
					cout<<"\n";
					system("pause");
					break;
			
			case 3:	cout<<"\nDigite el elemento a buscar: ";cin>>dato;
					if(busqueda(arbol,dato) == true)
					{
						cout<<"\nElemento "<<dato<<"  Ha sido encontrado en el arbol\n";
					}
					else
					{
						cout<<"\nElemento no encontrado";	
					}
					cout<<"\n";
					system("pause");
					break;
			
			case 4: cout<<"\nRecorrido en PreOrden: ";
					preOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
					
					
			case 5: cout<<"\nRecorrido en InOrden: ";
					inOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
					
					
			case 6: cout<<"\nRecorrido en PostOrden: ";
					postOrden(arbol);
					cout<<"\n\n";	
					system("pause");	
					break;
					
					
			case 7: cout<<"\nDigite el numero a eliminar: ";cin>>dato;
					eliminar(arbol,dato);
					cout<<"\n";
					system("pause");	
					break;
					
		
			case 8: break;
		}
		//system("cls");
	}
	while(opcion != 8);
	
	
}


//Funcion Para crear un nuevo Nodo

Nodo *crearNodo(int n, Nodo *padre)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

//Funcion para insertar elementos en el arbol.
void insertarNodo(Nodo *&arbol,int n,Nodo *padre)
{
		//Comprobar si el arbol está vacio
		if(arbol == NULL)
		{
			Nodo *nuevo_nodo = crearNodo(n,padre);
			arbol = nuevo_nodo;	
		}
		//Comprobar si el arbol tiene un nodo o más
		else
		{
			int valorRaiz = arbol->dato; //Obtenemos el valor de la raiz
			
			//Si el elemento es menor a la raiz, insertamos en izq
			if(n < valorRaiz)
			{
				insertarNodo(arbol->izq,n,arbol);
			}
			//Si el elemento es mayor a la raiz, insertamos en der
			else
			{
				insertarNodo(arbol->der,n,arbol);
			}
		}	
	
}

//Función para mostrar el arbol completo
void mostrarArbol(Nodo *arbol,int contador)
{
		if(arbol == NULL) //Comprobamos si el arbol esta vacio
		{
			return; 
		}
		else
		{
			mostrarArbol(arbol->der,contador+1);
			for(int i=0;i<contador;i++)
			{
				cout<<"   "	;
			}
			cout<<arbol->dato<<endl;
			mostrarArbol(arbol->izq,contador+1);
		}
}

//Funcion para buscar un elemento en el arbol
bool  busqueda(Nodo *arbol,int n)
{
		if(arbol == NULL)  //Si el arbol esta vacio
		{
			return false;
		}
		else if(arbol->dato == n) //Si el nodo es igual al elemento
		{
			return true;
		}
		else if(n < arbol->dato)
		{
			return busqueda(arbol->izq,n);
		}
		else
		{
			return busqueda(arbol->der,n);
		}
}

//Funcion para recorrido en profundidad  -PreOrden
void preOrden(Nodo *arbol)
{
		if(arbol == NULL) //Si el arbol esta vacio
		{
			return;
		}
		
		else
		{
			cout<<arbol->dato<<"  - ";
			preOrden(arbol->izq);
			preOrden(arbol->der);
		}
}

//Funcion para recorrido en profundidad -InOrden
void inOrden(Nodo *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		inOrden(arbol->izq);
		cout<<arbol->dato<<"  - ";
		inOrden(arbol->der);	
	}
	
}

//Funcion para recorrido en profundidad -PostOrden

void postOrden(Nodo *arbol)
{
	if(arbol == NULL )
	{
		return;
	}
	else
	{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
	
}


//Funcion para eliminar un nodo del arbol
void eliminar(Nodo *arbol,int n)
{
	if(arbol == NULL) //Si el arbol esta vacio
	{
		return; //No haces nada	
	}	
	
	else if(n <arbol->dato) //Si el valor es menor...
	{
		eliminar(arbol->izq,n); //Busca por la izquierda
	}
	
	else if(n > arbol->dato) //Si el valor es mayor
	{
		eliminar(arbol->der,n); //Busca por la derecha
	}
	else //Si ya se encontro el valor se elimina el nodo
	{
		eliminarNodo(arbol);
	}
}


// Funcion para determinar el nodo mas izq posible
Nodo *minimo(Nodo *arbol)
{
	if(arbol == NULL) //Si el arbol esta vacio
	{
		return NULL; //Retornas nulo
	}
	
	if(arbol->izq) //Si Tiene hijo izq
	{
		return minimo(arbol->izq); //Busacmos la parte mas izq posible	
	}
	else // Si no tiene hijo izq
	{
		return arbol; //Retornamos el mismo nodo
	}
}


//Funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol,Nodo *nuevoNodo)
{
	if(arbol->padre)
	{
		//arbol->padre. Hay que asignarle su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato)
		{
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato)
		{
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo)
	{
		//Procedemos a asignarle su nuevo Padre
		nuevoNodo->padre = arbol->padre;
	}
}


//Funcion para destruir un Nodo
void destruirNodo(Nodo *nodo)
{
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
		
}

// Funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar)
{
	if(nodoEliminar->izq && nodoEliminar->der) //Si el nodo tiene hijo izq y der
	{
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato ;
		eliminarNodo(menor);	
	}
	else if(nodoEliminar->izq) //Si tiene hijo izq
	{
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der)
	{
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else //Si el nodo no tiene Hojas
	{
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
	
	
}
