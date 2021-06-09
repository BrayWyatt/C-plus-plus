/*Ejercicio 18: Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente 
de cualquier par de fechas que se le transmitan. Por Ejemplo, si se transmiten las fechas
10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha */


#include<iostream>
#include<conio.h>
using namespace std;

//Definimos Estructura
struct Fecha{
	int dia,mes,anio;
}fecha1, fecha2;

//Definimos la función
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void muestra(Fecha);

int main()
{
	pedirDatos();
	
	Fecha x = mayor(fecha1,fecha2);
	
	muestra(x);
	
	getch();
	return 0;
}


void pedirDatos()
{
	cout<<"Digite la primera fecha: "<<endl;
	cout<<"Dia: ";cin>>fecha1.dia;
	cout<<"Mes: ";cin>>fecha1.mes;
	cout<<"Anio: ";cin>>fecha1.anio;
	
	
	cout<<"\n\nDigite la segunda fecha: "<<endl;
	cout<<"Dia: ";cin>>fecha2.dia;
	cout<<"Mes: ";cin>>fecha2.mes;
	cout<<"Anio: ";cin>>fecha2.anio;	
}



Fecha mayor(Fecha fecha1, Fecha fecha2)
{
	Fecha mayorFecha;
	
	if((fecha1.anio>=fecha2.anio)&&(fecha1.mes>=fecha2.mes)&&(fecha1.dia>=fecha2.dia))
	{
		mayorFecha	= fecha1;
	}
	else
	{
		mayorFecha = fecha2;
	}
	
	return mayorFecha;
}

void muestra(Fecha x)
{
	cout<<"\nLa fecha mas reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}


