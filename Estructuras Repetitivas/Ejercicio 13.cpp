/*13. Hacer un programa que realice la serie de Fibonacci
Fibonacci-> 1,1,2,3,5,8,13,....,n */


#include<iostream>
#include<stdlib.h>
using namespace std;


int main ()
{
	int numero, x=0,y=1,z=1;
	
	cout<<"Digite el numero de elementos: ";cin>>numero;
	
	
	cout<<"1 ";
	for(int i=i;i<numero;i++)
	{
		z= x + y;//1 2 3 5
		cout<<z<<" ";//1 2 3 5
		
		x = y;//1 1 2
		y = z;//1 2	3
	}
	
	cout<<"\n";
	system("pause");
	
	return 0;
}


