/* Ejercicio 8: Pedir una cadena de caracteres(string) al usuario, e indicar cuantas veces aparece la
vocal a;e;i;o;u; en la cadena de carácteres.
NOTA: Usar Punteros */


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


//Definimos Funciones
void pedirDatos();
void ContandoVocales(char *);
//Definimos variables globales
char palabraUsuario[50];


int main()
{
	pedirDatos();
	ContandoVocales(palabraUsuario);
	
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite una palabra o frase: ";cin.getline(palabraUsuario,50,'\n');
	
	strupr(palabraUsuario);// Pasando a Mayuscula la palabra o frase
}

void ContandoVocales(char *palabra)
{
	int contA=0;
	int contE=0;
	int contI=0;
	int contO=0;
	int contU=0;
	
		while(*palabra)//Sigue mientras nombre no sea nulo '\0'
		{
			switch(*palabra)
			{
				case 'A': contA++;break;
				case 'E': contE++;break;
				case 'I': contI++;break;
				case 'O': contO++;break;
				case 'U': contU++;break;
			}
			palabra++;
		}
	cout<<"\n\nNumero de vces de la vocal A: "<<contA<<endl;
	cout<<"\n\nNumero de vces de la vocal E: "<<contE<<endl;
	cout<<"\n\nNumero de vces de la vocal I: "<<contI<<endl;
	cout<<"\n\nNumero de vces de la vocal O: "<<contO<<endl;
	cout<<"\n\nNumero de vces de la vocal U: "<<contU<<endl;
	
}

