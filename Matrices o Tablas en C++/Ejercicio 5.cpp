/*5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz transpuesta es aquella en la que la columna i era la fila i de la
mmatriz original. */


/* Pseudocodigo

/1 2 3/        /1 4 7/
/4 5 6/ --->   /2 5 8/
/7 8 9/        /3 6 9/

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Digite un numero  ["<<i<<"] ["<<j<<"]:  ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"Matriz Original\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<numeros[i][j];
		}
		
		cout<<"\nMatriz Transpuesta\n";
	}
	
	getch();
	return 0;
}
