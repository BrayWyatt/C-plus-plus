/* Ejemplo: Dado un número natural N, obtener la suma de los digitos que
consta. Presentar un algoritmo recursivo y otro iterativo */

#include<iostream>
using namespace std;

//Solucion Recursiva
int sumaRecursiva(int n)
{
		if(n<=9) //Caso Base
		{
			return n;
		}
		else
		{
			return sumaRecursiva(n/10) + n%10;
		}
}


//Solucion Iterativa
int sumaIterativa(int n)
{
	int suma=0;
	
	while(n > 9)
	{
		suma += n%10;
		n /= 10;	
	}	
	
	return (suma+n);
	
}



int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	cout<<"La suma de los digitos del numero es: "<<endl;
	cout<<"Algoritmo recursivo: "<<sumaRecursiva(numero)<<endl;
	
	cout<<"\n";
	cout<<"Algoritmo Iterativo: "<<sumaIterativa(numero)<<endl;
	
	
	return 0;
}
