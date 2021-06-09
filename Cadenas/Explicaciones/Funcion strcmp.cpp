//Comparacion de Cadenas - Funcion strcmp;


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
char palabra1[] = "Hola";
char palabra2[] = "hola";

	if(strcmp(palabra1,palabra2)==0)
	{
		cout<<"Ambas cadenas son iguales"<<endl;	
	}
	
	else
	{
		cout<<"Ambas cadenas son diferentes"<<endl;
	}

	getch();
	return 0;
	
}
