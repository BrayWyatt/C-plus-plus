/*2. Escribe un programa que defina un vector de números y calcule la 
multiplicacion acumulada de sus elementos. */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros []={1,2,3,4,5};
	int multi =1;
	
	for(int i=0;i<5;i++)
	{
		multi *= numeros[i];
		
	}
	
	cout<<"La multiplicacion de los elementos es: "<<multi<<endl;
	
	
	
	
	
	
	
	getch();
	return 0;
}
