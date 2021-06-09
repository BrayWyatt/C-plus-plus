/* 4. Escribe un programa que tome cada 4 horas la temperatura exteior, 
leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura mas alta y la mas baja */




#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
//Variables a utilizar

float temperatura,mayor=0,menor=9999999;
float sumaTotal=0;
float promedio=0;	
	
	for(int i=0;i<24;i+=4)
	{
		
		
		cout<<"Digite la temperatura de la hora "<<i<<" : ";
		cin>>temperatura;
		
		sumaTotal += temperatura;
		
		if(temperatura >mayor)
		{	
			mayor= temperatura; //24
		}
		
		if(temperatura < menor)
		{	
			menor = temperatura;
		}
		
	}
	
	
	promedio = sumaTotal/6;
	
	cout<<"La temperatura Promedio:  "<<promedio<<endl;
	cout<<"La temperatura mas alta:  "<<mayor<<endl;
	cout<<"La temperatura mas baja:  "<<menor<<endl;
	
	
getch();
return 0;
}
