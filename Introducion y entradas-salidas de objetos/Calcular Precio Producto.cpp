//2.- Escribe un programa que lea de la entrada estándar, el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el iva.


#include<iostream>


using namespace std;




int main()
{
	
	
//declaración de variables;

	float precio;
	float iva;
	float precioTotal;
	
	
	cout<<"Digite el precio del producto: ";
	cin>>precio;
	
	
	
	iva = precio * 0.21;
	
	
	
	precioTotal = precio + iva;
	
	
	cout<<"El resultado del producto con Iva es :"<<precioTotal<<endl;
	
	
		
	
	
	
	
	
	return 0;
}
