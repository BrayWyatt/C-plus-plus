/*1. Escribe un programa que lea de la emtrada estandar dos n�meros 
y muestre en la salida est�ndar su suma, resta multiplicaci�n y division.

*/


#include<iostream>
using namespace std;




int main()
{
	
	int n1,n2;
	
	int suma=0, resta=0, multiplicacion=0, division=0;
	
	int resultado;
	
	
	cout<<"Digite primer numero: "; cin>>n1;
	cout<<"Digite segundo numero: "; cin>>n2;
	
	suma = n1 + n2;
	
	resta =n1 - n2;
	
	multiplicacion= n1 * n2;
	
	division= n1 / n2;
	
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\nLa division es: "<<division<<endl;
	
	
	
	
	return 0;
}
