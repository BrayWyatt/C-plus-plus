//Eliminar elementos en una cola

#include<iostream>
#include<conio.h>
#include<conio.h>
using namespace std;

//Definimos la estructura
struct Nodo
{
	int dato;
	Nodo *siguiente;
};

//Definimos Funciones
void insertarCola(Nodo *&,Nodo*&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,int &);

int main()
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	//Eliminar elementos de la cola
	cout<<"\nQuitando los nodos de la cola: ";
	while(frente !=NULL)
	{
		suprimirCola(frente,fin,dato);
		
		if(frente != NULL)
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

//Funcion para insertar elementos en una cola
void insertarCola(Nodo *&frente,Nodo*&fin,int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" Insertado a cola correctamente\n";
}

//Funci�n para determinar si la cola est� vacia o no
bool cola_vacia(Nodo *frente)
{
	return (frente == NULL)? true : false;
}

//Funci�n para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n)
{
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente -> siguiente;
	}
	
	delete aux;
}
