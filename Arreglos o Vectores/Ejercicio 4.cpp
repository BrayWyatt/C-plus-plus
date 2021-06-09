/*4. Escribe un programa que defina un vector de números y muestre en la 
salida estandar el vector en orden inverso del ultimo al primer elemento.*/


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int numeros[5] = {1,2,3,4,5};

for(int i=4;i>=0;i--)
{
cout<<numeros[i]<<endl;
	
}


getch();
return 0;	
}

