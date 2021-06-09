/*14. En una clse de 5 alumnos se han realizado 3 examenes y se requiere 
determinar el numero de:

a-) Alumnos que aprobaron todos los examenes
b-)Alumnos que al menos aprobaron un examen.
c-) Alumnos que aprobaron únicamente el último examen

Realizar un programa que permita la lectura de los datos y el cálculo de las
estadísticas. */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
float examen1, examen2, examen3;
int aprobadosTodos=0,aprobadosUno=0,aprobadosUltimo=0;

for(int i=1;i<=5;i++)
{
	cout<<i<<". Digire la nota del primer examen: ";cin>>examen1;
	cout<<i<<". Digire la nota del segundo examen: ";cin>>examen2;
	cout<<i<<". Digire la nota del tercer examen: ";cin>>examen3;
	cout<<"\n";
	
	
	if((examen1>10.00)&&(examen2>10.00)&&(examen3>10.00))
	{
		aprobadosTodos++;
	}
	
	
	
	if((examen1>10.00)||(examen2>10.00)||(examen3>10.00))
	{
		aprobadosUno++;
	}
	
	
	if((examen1<10.00)||(examen2<10.00)||(examen3<10.00))
	{
		aprobadosUltimo++;
	}
	
	
	cout<<"\nAlumnos que aprobaron todos los examenes: "<<aprobadosTodos<<endl;
	cout<<"Alumnos que al menos aprobaron un examen: "<<aprobadosUno<<endl;
	cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<aprobadosUltimo<<endl;
	
	cout<"\n";
	
}







getch();
return 0;	
}
