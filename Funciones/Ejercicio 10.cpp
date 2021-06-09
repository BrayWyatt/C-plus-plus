/* Ejercicio 10: Escriba una funci�n nombrada calc_annos() que tenga un par�metro entero que 
represente el n�mero total de d�as desde la fecha 1/1/2000 y par�metros de referecnia nombrados por
a�o mes y dia. La funci�n es calcular el a�o mes y dia actual para el n�mero dado de d�as que se le
transmitan. Para este problema suponga que cada a�o tiene 365 dias y cada m�s tiene 30 dias. */



#include<iostream>
#include<conio.h>
using namespace std;


//Definici�n de Funcion
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
