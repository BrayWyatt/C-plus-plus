/*3. Escriba un progtama que lea de la entrada estándar un vector de numeros
y muestre en la salida estándar los números del vector 
con sus índices asociados.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros [100];
	int n;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Digite un numero: ";
		cin>>numeros[i];  //Guardando todos los elementos del vector
	}
	
	//Ahora, mostramos los elementos con sus indices asociados
	
	for(int i=0;i<n;i++)
	{
		cout<<i<<" ->"<<numeros[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
}

