/* Ejercicio 1: Escriba una función llamada mult(), que acepte dos numeros en punto flotante como 
parámetros, multiplique estos dos números y despliegue el resultado. */

#include<iostream>
#include<conio.h>
using namespace std;



//Prototipo de Funciones
void pedirDatos();
void multiplicar(float x, float y);
float num1, num2;

int main()
{
	pedirDatos();
	multiplicar(num1,num2);
	
	getch();
	return 0;	
}

void pedirDatos()
{
	cout<<"Digite 2 numeros: ";cin>>num1>>num2;
	
}

void multiplicar(float x, float y){
	float multi = x * y;
		cout<<"La multiplicacion es: "<<multi<<endl;
	
	
}






