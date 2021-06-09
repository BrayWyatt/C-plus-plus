/* 
Ejercicio 2. Escribe un programa que lea 3 numeros y determine 
cual de ellos es mayor */



#include<iostream>

using namespace std;

int main()
{
		int n1,n2,n3;
	
	cout<<"Digite 3 numeros por pantalla: ";cin>>n1>>n2>>n3;
	
	if((n1>=n2)&&(n1>=n3))
	{
	cout<<"\nEl mayor es : "<<n1<<endl;	
	}
	
	else if((n2>=n1) &&(n2>=n3))
	{
	cout<<"\nEl mayor es : "<<n2<<endl;	
	}
	
	else
	{
			cout<<"\nEl mayor es : "<<n3<<endl;		
	}
	
	
	
	
	
	
	return 0;
}
