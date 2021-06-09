//Algoritmos - Iniciando con algorithm

#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
#include<cstdlib>
using namespace std;


//Prototipo de Funcion
int numerosAleatorios(){
	return rand()%10;
}

int main()
{
	list<int> valores(10); //Lista de 10 elementos enteros
	
	//Generado numero aleatorios en un rango de la lista
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	ostream_iterator<int> salida(cout,"|");
	copy(valores.begin(),valores.end(),salida);
	
	//Buscamos la primera aparicion del numero 8 en la lista
	list<int>::iterator i;
	i = find(valores.begin(),valores.end(), 11);
	
	cout<<endl;
	
	//Analizamos si i no sobrepasa los rangos de la lista
	if(i != valores.end())
	{
		cout<<"El elemento " <<*i<<"  Si ha sido encontrado en la lista"<<endl;
	}
	else
	{
		cout<<"El elemento no ha sido encontrado"<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
