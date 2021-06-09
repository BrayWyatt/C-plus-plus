/* 8. Pedir al usuario 2 cadenas de caracteres de numeros, uno de entero y el
otro real, convertirlos a sus respectivos valores y por ultimo sumarlos. */


#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char cad1[10],cad2[10];
	int valorEntero;
	float valorFlotante;
	
	//Guardar los numeros como cadenas
	cout<<"Digite un valor entero: ";
	cin.getline(cad1,10,'\n');
	
	cout<<"Digite un valor flotante: ";	
	cin.getline(cad2,10,'\n');
	
	//Transformamos las cadenas a numeros
	valorEntero = atoi(cad1);
	valorFlotante = atof(cad2);
	
	//Sumar los 2 numeros
	cout<<"La suma es: "<<valorEntero+valorFlotante<<endl;

getch();
return 0;	
}
