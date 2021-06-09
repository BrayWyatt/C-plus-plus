/* 11. Hacer un programa que simule un cajero automático con un saldo inicial
de 1000 euros.*/


#include<iostream>

using namespace std;


int main()
{
	int saldo_incial=1000, opc;
	float extra, saldo, retiro =0;
	
	cout<<"\tBienvenido a su cajero Virtual"<<endl;
	cout<<"1. Ingreso dinero en cuenta "<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir";
	cout<<"Opción";cin>>opc;
	
	switch(opc)
	{
		case 1: cout<<"Digite la cantidad de euros que va a Ingresar: ";
		cin>>extra;
		//Calculo del saldo
		saldo = saldo_inicial + extra;
		cout<<"Dinero en cuenta: "<<saldo;break;
		
		
	 case 2: cout<<"Digite la cantidad de dinero que va a retirar:  ";
	 cin>>retiro;
	 
	 //Calculamos el retiro del saldo
	 if(retiro >saldo_incial)
	 {
	 	cout<<"No tiene esa cantidad de dinero";	
	 }
	 
	 else
	 {
	 	saldo= saldo_inicial-retiro;
	 	cout<<"Dinero en Cuenta: "<<saldo;
	 }
	 
	 
	 case 3: break;
	 
	}
	
	
	
	return 0;
}
