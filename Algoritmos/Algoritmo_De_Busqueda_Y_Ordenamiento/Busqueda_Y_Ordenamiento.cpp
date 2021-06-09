//Algoritmos de Búsqueda y Ordenamiento

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cstdlib>
using namespace std;


//Funcion para generar valores aleatorios
int numerosAleatorios()
{
	return rand()%30;
}

//Funcion Logica para calcular si un numero es par
template <class T>
bool esPar(T valor)
{
	return ((valor%2)==0);
}


int main()
{
	vector<int> valores(10);
	
	//Generamos numeros aleatorios y los guardamos dentro de vector
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	cout<<endl;
	
	//Mostrar en pantalla el vector
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	
	//Creamos un nuevo vector para almacenar los elementos pares
	vector<int> pares;
	
	//Iterador para recorrer el vector de valores
	vector<int>::iterator i = valores.begin();
	
	while((i=find_if(i,valores.end(),esPar<int>)) !=valores.end()){
	pares.push_back(*i);
	i++;
	} 
	cout<<endl;
	cout<<"\n\Arreglo de numeros pares"<<endl;
	
	
	//Ordenamiento del vector Pares
	sort(pares.begin(),pares.end());
	
	
	
	//Mostramos el vector pares en Pantalla
	copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"|"));
	
	return 0;
}
