//7. La calificacion final de un estudiante es el promedio de tres notas:

/*
- La nota de Prácticas cuenta con un 30% del total.

- La nota teórica cuenta un 60% .

- La nota de participación cuenta con el 10% restante.


Escribe un  programa que lea las tres notas del alumno y escriba su nota final.

*/




#include<iostream>


using namespace std;

int main()
{
	
	float practica, teorica, participacion, notaFinal;
	
	
	cout<<"Digite la nota de practicas: ";cin>>practica;
	cout<<"Digite la nota teórica: ";cin>>teorica;
	cout<<"Digite la nota de participacion: ";cin>>participacion;
	
	practica = practica * 0.30;
	
	teorica = teorica * 0.60;
	
	participacion = participacion * 0.10;
	
	
	notaFinal= practica + teorica + participacion;	
	cout<<"\nLa nota final es: "<<notaFinal;
	
	
	return 0;
}
