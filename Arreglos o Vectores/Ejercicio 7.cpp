/* 7.Realiza un programa que defina dos vectores de caracteres y despues 
almacene el conenido de ambos vectores en un nuevo vector, situando en primer
lugar los elementos del primer vector, seguido por los elementos del segundo
vector. */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char letras1[] = {'a','b','c','d','e'};
	char letras2[] = {'f','g','h','i','j'};
	char letras3[10];

	//Copiando los elementos de letras1 a letras3
	
	for(int i=0;i<5;i++)
	{
		letras3[i] = letras1[i];
	}

	//Copiando los elementos de letras2 a letras3
	for(int i=5;i<10;i++)
	{
		letras3[i] = letras2[i-5];
	}
	
	
	//Mostrar el nuevo vector
	
	for(int i=0;i<10;i++)
	{
		cout<<letras3[i]<<endl;
	}

getch();
return 0;	
}
