/*6. Realice un programa que calcule la suma de dos matrices cuadradas de 3*3 */



#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

int numeros[3][3] = {{1,0,4},{2,3,2},{1,4,1}};
int numeros2[3][3]= {{1,3,2},{4,1,1},{1,1,2}};

//Imprimimos la 1 matriz 
cout<<"Mostrando las 2 matrices: \n";

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
	{
	   cout<<numeros[i][j]<<"  ";
	   
	}
	cout<<"\n";
}

//Imprimimos la 2 matriz
cout<<"\n";
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
	{
	   cout<<numeros2[i][j]<<"  ";
	   
	}
	cout<<"\n";
}


//Sumamos las dos matrices

cout<<"\nLa suma de las dos matrices es:  "<<endl;
for (int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<numeros[i][j] + numeros2[i][j]<<" ";
	}
	cout<<"\n";
}
   

getch();
return 0;	
}
