/* 8. Escribe un programa que lea de la entrada estandar tres numeros. Despues
debe leer un cuarto número e indicar si el número coincide con alguno de los
introducidos con anterioridad. */


#include<iostream>

using namespace std;


int main()
{
	int n1,n2,n3,n4;
	
	cout<<" Digite 3 numeros: ";cin>>n1>>n2>>n3;	
	
	cout<<" Digite un cuarto  numero: ";cin>>n4;
	
	
	if((n1==n4) ||(n2==n4) || (n3==n4))
	{
		
		cout<<"\nEl cuarto numero coincide con almenos 1 de los 3 anteriores"<<endl;	
	}
	
	
	else{
			cout<<"\nEl cuarto numero  no coincide con los anteriores"<<endl;
		
	}
	
	return 0;
}
