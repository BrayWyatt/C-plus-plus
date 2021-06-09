//Contenedor Lineal List

#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> datos;
	
	//Agregamos elementos a la lista
	datos.push_back(5); //Agrega elementos al final de la lista
	datos.push_back(1);
	datos.push_back(6);
	
	datos.push_front(2); //Agregamos al principio de la lista
	datos.push_front(7);
	
	
	
	//Ordenar los elementos de menor a mayor
	datos.sort();
	
	//Mostrar los elementos de la lista
	list<int>::iterator i;
	
	i = datos.begin();
	
	while(i != datos.end())
	{
		cout<< *i <<" | ";
		
		i++;
	}
	
	cout<<endl;
	
	//Para eliminar elementos de la lista
	datos.pop_back();
	datos.pop_front();
	
	i = datos.begin();
	
	while(i != datos.end())
	{
		cout<< *i <<" | ";
		
		i++;
	}

	cout<<endl;
	
	
	return 0;
}
