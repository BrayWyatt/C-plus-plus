/* Ejercicio 10: Escriba una función nombrada calc_annos() que tenga un parámetro entero que 
represente el número total de días desde la fecha 1/1/2000 y parámetros de referecnia nombrados por
año mes y dia. La función es calcular el año mes y dia actual para el número dado de días que se le
transmitan. Para este problema suponga que cada año tiene 365 dias y cada més tiene 30 dias. */



#include<iostream>
#include<conio.h>
using namespace std;


//Definición de Funcion
void calc_anios(int, int&,int&,int&);

int main()
{
	int totalDias, anio, mes, dia;
	
	cout<<"Digite el numero total de dias: ";cin>>totalDias;	
	
	calc_anios(totalDias,anio,mes,dia);
	
	cout<<"Fecha Actual:  "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;
	
	
	
	getch();
	return 0;
}

void calc_anios(int totalDias, int& anio,int& mes, int& dia)
{
	anio = totalDias/365;
	totalDias %=365;
	mes = totalDias/30;
	dia = totalDias%30;                                
	
}
