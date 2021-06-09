/* 5. Desarrolle un programa que lea de la entrada estándar un vector
de enteros y determine el mayor elemento del vector. */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[100];
	int n, mayor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<". Digite un numero: ";cin>>numeros[i];
		
		
		
		//Determinar el mayor elementos del Vector
		if(numeros[i]> mayor)
		{
			mayor = numeros[i];	
		}
	}
	
cout<<"El mayor elemento del vector es: "<<mayor<<endl;
	
	
	
	
	
	getch();
	return 0;
}
