//Contenedor lineal -Vector

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> numeros; //Arreglos de enteros
	
	numeros.push_back(5); //Agrega elementos al final del arreglo
	numeros.push_back(10);
	numeros.push_back(1);
	numeros.push_back(15);
	numeros.push_back(20);
	
	//Mostrar los elementos del arreglo
	for(int i=0;i<numeros.size();i++)
	{
		cout<<numeros[i]<<" | ";
	}
	
	
	
	
	return 0;
}
