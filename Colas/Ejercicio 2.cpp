/* Ejercicio 2: Hacer un programa que guarde daros de clientes de un banco, los alamcenes en cola y
por último muestre los clientes en el orden correcto */

#include<iostream>
#include<conio.h>
#include<conio.h>
using namespace std;

//Definimos la estructura de Datos

struct Cliente
{
	char nombre[30];
	char clave[10];
	int edad;
	
};

struct Nodo
{
	Cliente c;
	Nodo *siguiente;
};


//Definicion de Funciones
void cargar_clientes(Cliente &);
void insertarCola(Nodo *&,Nodo*&,Cliente);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,Cliente &);


//Metodo Main
int main()
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char rpt;
	
	do
	{
		//Llamamos a la función
		cargar_clientes(c); //Cargar los datos
		insertarCola(frente,fin,c); //Agregar nuevos datos a la cola
		
		
		cout<<"\nDesea agregar un nuevo cliente(s/n):  ";cin>>rpt;
			
	}while(rpt =='S' || rpt == 's' );
	
	cout<<"\n=====Carga de clientes exitosa=======\n\n";
	
	cout<<"\tClientes agregados a cola:\n\n";
	while(frente != NULL)
	{
		suprimirCola(frente,fin,c);
		
		cout<<"Nombre: "<<c.nombre<<endl;
		cout<<"Clave: "<<c.clave<<endl;
		cout<<"Edad: "<<c.edad<<endl;
		cout<<"\n";
		
	}
	
	getch();
	return 0;
}

void cargar_clientes(Cliente &c)
{
	
	cout<<"\tAgregar nuevo cliente\n";
	cout<<"Nombre: ";cin.getline(c.nombre,30,'\n');
	cout<<"Clave: "; cin.getline(c.clave,10,'\n');
	cout<<"Edad: ";cin>>c.edad;
	cout<<"\n";
}


//Funcion para insertar elementos en la cola
void insertarCola(Nodo *&frente,Nodo*&fin,Cliente c)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->c = c;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		frente->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}



//Función para determinar si la cola está vacia o no
bool cola_vacia(Nodo *frente)
{
	return (frente == NULL)? true : false;
}

//Función para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,Cliente &c)
{
	c = frente->c;
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
