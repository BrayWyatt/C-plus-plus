/* Punteros - Declaraci�n de Punteros */


/*
&n = la direccion de n
*n = La variable cuya direcci�n est� almacenada en n */

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num,*dir_num;
	
	num = 20;
	dir_num = &num;
	
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Direccion de memoria: "<<dir_num<<endl;
	
	getch();
	return 0;	
}
