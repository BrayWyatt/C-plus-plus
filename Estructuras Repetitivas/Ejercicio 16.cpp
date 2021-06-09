/* 16. Realice un programa que calcule la descomposicion en factores primos de
un numero entero   Ej:20= 2*2*5 */


#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

int numero;

cout<<"Digite un numero:  ";cin>>numero;

for(int i=2;numero>1;i++)
{
		while(numero%i==0)
		{
			cout<<i<<"  ";
			numero /= i;	
		}
}
	
	
	getch();
	return 0;
}
