/*Ejercicio 1: Hcaer un programa en C++, utilizando Colas que contenga el siguiente Menu:

	1. Insertar un caracter a una cola
	2. Mostrar todos los elementos de la cola
	3. Salir
*/

#include<iostream>
#include<conio.h>
#include<conio.h>
using namespace std;


//Definimos la estructura de Datos
struct Nodo
{
	char dato;
	Nodo *siguiente;
};

//Definicion de Funciones
void menu();
void insertarCola(Nodo *&,Nodo*&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,int &);

//Metodo Main
int main()
{
	menu();
	
	
	
	getch();
	return 0;
}




//Añadimos y asignamos los datos a la función Menu
void menu()
{ 
	int opc;
	int dato;
	Nodo*frente = NULL;
	Nodo*fin = NULL;
	
	do
	{
		cout<<"\t.:Menu:.\n";
		cout<<"1. Insertar un caracter a una cola"<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";cin>>opc;
		
		switch(opc)
		{
			case 1: cout<<"\nIngrese el caracter para agregar a la cola: ";cin>>dato;
					insertarCola(frente,fin,dato);
			break;
			
			case 2: cout<<"\nMostrando los elementos de la cola: ";
					while(frente != NULL)
					{
						suprimirCola(frente,fin,dato);
						if(frente != NULL)
						{
							cout<<dato<<"  ,  ";
						}
						else
						{
							cout<<" . ";
						}
						
					}
					system("pause");
					break;
					
					
			case 3: break;
		}	
	}	
	while(opc != 3);
		
}

//Funcion para insertar elementos en la cola
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
//Función para determinar si la cola está vacia o no
bool cola_vacia(Nodo *frente)
{
	return (frente == NULL)? true : false;
}

//Función para eliminar elementos de la cola
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
