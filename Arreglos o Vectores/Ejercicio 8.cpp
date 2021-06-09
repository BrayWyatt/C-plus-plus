/* 8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro 
arreglo multiplicados por 2 y muestre el segundo arreglo */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int numeros[5],numeros2[5];
	
	//Primero pedimos los elementos del vector
	for(int i=0;i<5;i++)
	{
		cout<<i<<". Digite los elementos del arreglo: ";
		cin>>numeros[i];
	}
	
	//Ahora, vamos a multiplicar por 2 los n del arreglo
	
		for(int i=0;i<5;i++)
		{
			numeros2[i] = numeros[i]*2;
		}
	
		cout<<"\nMostrando los elementos del arreglo por 2: \n";
		for(int i=0;i<5;i++)
		{
			cout<<numeros2[i]<<" ";
		}
		
	
	
	getch();
	return 0;
}




