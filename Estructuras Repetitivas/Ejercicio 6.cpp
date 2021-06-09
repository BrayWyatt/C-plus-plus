/* 6. Escribe un programa que calcule x^y, donde tanto x como y son enteros
positivos sin utilizar la funcion pow*/

#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
 int x,y;
 int elevacion=1;
 
 cout<<"Digite el valor de x:  ";cin>>x;
 
 cout<<"Digite el valor de y:  ";cin>>y;
 
 
 //2^3
 
 
 for(int i=1;i<=y;i++)
  {
 	elevacion = elevacion * x;
  }
 
 cout<<"\nEl resultado es la elevacion es: "<<elevacion<<endl;
 	
	
	
getch();	
return 0;
}
