/* Ejercicio 7: Pedri su nombre al usuario y devolver el número de vocales que hay.

Nota: Recuerda que debes utilizar Punteros. */


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


//Definimos Funciones
void pedirDatos();
int ContandoVocales(char *);
//Definimos variables globales
char nombreUsuario[30];

int main()
{
	pedirDatos();
	cout<<"\nEl numero de vocales del nombre es: "<<ContandoVocales(nombreUsuario)<<endl;
	
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite Su Nombre: ";cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);// Pasando a Mayuscula el nombre
}

int ContandoVocales(char *nombre)
{
	int contador =0;
	
	while(*nombre)//Sigue mientras nombre no sea nulo '\0'
	{
		switch(*nombre)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': contador++;	
		}
		nombre++;
	}
	return contador;
}





