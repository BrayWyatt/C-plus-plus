/*Ejercicio 20: Reailce una funci�n recursiva para la serie Fibonacci
Nota: La serie de Fibonacci est� formada por la secuenia de n�meros: 0,1,1,2,3,5,8,13,21,34....
*/


#include<iostream>
#include<conio.h>
using namespace std;

//Definimos la Funci�n
int fibonacci(int);

int main()
{
	int nElementos;
	
	do
	{
		cout<<"Digite el n�mero de elementos: ";cin>>nElementos;
	}
	while(nElementos <=0);
	
	cout<<"\n\nSerie Fibonacci: ";
	for(int i=0;i<nElementos;i++)
	{
		cout<<fibonacci(i)<<"  , ";
	}
	
	
	getch();
	return 0;
}

int fibonacci(int n)
{
	if(n<2)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	
}
