/* 15. Realizar un programa que solicite al usuario que piense en un número
entero entre el 1 y el 100. El programa debe generar un numero aleatorio en
ese mismo rango[1-100], e indicarle al usuario si el nuevo numero que digito
es menor o mayor al numero aleatorio, asi hasta que lo adivine, y por ultimo
mostrarle el numero de intentos que le llevo.


Pseudocodigo

variable = limite_inferior +rand() % (limite_superior +1  - limite_inferior); */



#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main()
{
int numero, dato, contador =0;

srand(time(NULL));//generador de un numero aleatorio.
dato= 1+ rand()%(100);//25
	
do
{

cout<<"Digite un numero:  ";cin>>numero;//15

		if(numero>dato)
		{
			cout<<"\nDigite un numero menor\n";
		}
		
		if(numero<dato)
		{
			cout<<"\nDigite un numero mayor\n";	
		}
	contador++;
}	
while(numero != dato);
	
cout<<"\nFelicidades Adivinaste el Numero\n";
cout<<"Numero de Intentos: "<<contador<<endl;	
	
	
system("pause");		
return 0;	
}
