//Insertar Elementos en la Pilas

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

int main()
{
	Nodo *pila = NULL;
	int n1, n2;
	
	cout<<"Digite un numero: ";cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"Digite otro numero: ";cin>>n2;
	agregarPila(pila,n2);
	
	
	getch();
	return 0;
}


void agregarPila(Nodo *&pila,int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	
	cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl;
}



