/* Algoritmo recursivo para resolver las Torres de Hanoi*/

//Torres de Hanoi

#include<iostream>
using namespace std;

void hanoi(char varInicial,char varCentral, char varFinal,int n)
{
	if(n==1) //Caso Base
	{
		cout<<" Mover disco "<<n<<" desde varilla "<<varInicial
		<<" a varilla "<<varFinal<<endl;
	}
	else //Caso Recursivo
	{
		hanoi(varInicial,varFinal,varCentral,n-1);
		cout<<" Mover Disco "<<n<<" desde varilla "<<varInicial
		<<" a varilla "<<varFinal<<endl;
		
		hanoi(varCentral,varInicial,varFinal,n-1);
	}
}


int main()
{
	cout<<"\n";
	hanoi ('A','B','C',3);
	
	return 0;
}
