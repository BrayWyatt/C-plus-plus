/* 2. Realizar un programa que lea de la entrada estándar números hasta que se
introduzca un 0. En ese momento el programa debe terminar y mostrar en la salida
estandar el numero de valores mayores de cero leidos. */


#include<iostream>
#include<conio.h>


using namespace std;


int main()
{

	int numero, conteo = 0;
	
	do
	{
		cout<<"Digite un numero:  ";
		cin>>numero;
		
		if(numero>0)
		{
			conteo++;
		}	
	}
	
	while(numero !=0);
	
		cout<<"\nEl numero de valores mayores a cero introduciods es: "<<conteo<<endl;
		
	
	
	getch();
	return 0;
}
