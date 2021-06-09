/*Recursividad */

/*
Factorial de un número 3! = 3*2*1 

		factorial(n) = 1               , si n=0
									   ,si  n>0
						n*factorial(n-1)

*/


#include<iostream>
#include<conio.h>
using namespace std;

//Definimos la Función
int factorial(int);


int main()
{
	cout<< "El factorial es: "<<factorial(3)<<endl;
	
	
	
	getch();
	return 0;
}


int factorial(int n)
{
	if(n==0) //Caso Base
	{
		n = 1;
	}
	
	else   //Caso general
	{
		n = n * factorial(n-1);
	}
	return n;
}
