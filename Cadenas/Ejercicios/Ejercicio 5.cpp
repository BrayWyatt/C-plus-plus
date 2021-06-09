/*5. Hacer un programa que determine si una palabra es políndroma */

//Pseudocodigo: oso = oso; reconocer = reconocer;

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main()
{
	char palabra[20];
    char palabra2[20];

	cout<<"Digite una palabra: ";
	cin.getline(palabra,20,'\n');


	strcpy(palabra2,palabra);
	
	strrev(palabra2); //invirtiendo a palabra2.


	if(strcmp(palabra,palabra2)==0)
	{
		cout<<palabra<<" es un polindromo";
	}
	
	else
	{
		cout<<palabra<<"No es un polindromo";
	}
	

getch();
return 0;	
}
