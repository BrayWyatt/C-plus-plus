/* 2. Realiza un programa que defina una matriz de 3*3 y escriba un ciclo 
para que muestre la diagonal principal de la matriz */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Mostrando matriz completa: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"Mostrando diagonal principal: ";
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i==j)
				{
					cout<<numeros[i][j]<<endl;	
				}
			}
		cout<<"\n";
		}
	
	
	getch();
	return 0;
}
