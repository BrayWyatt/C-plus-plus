//Busqueda Secuencial

//a[5] =  {3,4,2,1,5}; dato = 4;

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char a[] = {'e','i','o','a','u'},dato;
	int i;
	char band = 'F';
	
	dato = 'u';
	//Búsqueda Secuencial
	i=0;
	while((band== 'F') &&   (i<5))
	{
		if(a[i] == dato)
		{
			band = 'V';	
		}
		
	i++;
	} 
	
	if(band== 'F')
	{
		cout<<"El numero a buscar no existe en el arreglo";
	}
	
	else
	{
		cout<<"El numero se ha encontrado en la pos:  "<<i-1<<endl;
	}	
	
	
	getch();
	return 0;
}
