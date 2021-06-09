/* Ejercicio 1: Definir una plantilla dentro de un archivo de cabecera, llamado
"Intercambio.h",que pueda intercambiar el valor de dos elementos del mismo
tipo. */

#include <iostream>
#include "intercambio.h"

using namespace std;

int main(int argc, char** argv) 
{

	cout<<"Digite el valor de dato1:  ";
	cin>>dato1;
	
	cout<<"Digite el valor de dato1:  ";
	cin>>dato2;


	//Intercambiar el valor de las 2 variables
	intercambiar(dato1,dato2);
	
	cout<<"Los nuevos varoles son:  ";<<endl;
	cout<<"Dato1 = "<<dato1<<endl;
	cout<<"Dato2 = "<<dato2<<endl;
	

	return 0;
}
