//3. Realice un programa que lea de la entrada estándar los siguientes datos de una persona: 
//Edad, Sexo y Altura en Metro.
// Tras leer los datos, el programa debe mostrarlos en la pantalla de salida estándar.




#include<iostream>


using namespace std;



int main()
{
	//Declaramos las variables
	int edad;
	char sexo[10];
	float altura;
	
	//Introducimos la salida por pantalla.
	cout<<"Introduzca su edad: "; cin>>edad;
	cout<<"Introduzca su sexo: "; cin>>sexo;
	cout<<"Introduzca su altura en metro: "; cin>>altura;
	
	cout<<"\nEdad :"<<edad<<endl;
	cout<<"\nSexo :"<<sexo<<endl;
	cout<<"\nAltura :"<<altura<<endl;
	
	
	
return 0;	
	
}
