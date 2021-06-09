//Metodo Burbuja

#include<iostream>
#include<conio.h>

using namespace std;
	
int main()
{
	
	int numeros[] = {4,1,2,3,5};
	int i,j,aux;
	
	//Algoritmo metodo burbuja
	for(i=0;i<5;i++)
	{
		for(i=0;i<5;i++)
		{
		  	if(numeros[j] > numeros[j+1]) 
		  	{
		  		aux = numeros[j];
		  		numeros[j] = numeros[j+1];
		  		numeros[j+1]= aux;
			}  
		}
	}
	
	
	cout<<"Orden Ascendente:  ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<"  ";
	}
	
	cout<<"Orden Descendente:  ";
	  for(i=4;i>=0;i--)
	  {
	  	cout<<numeros[i]<<"  ";
	  }
	
	getch();
	return 0;
}
