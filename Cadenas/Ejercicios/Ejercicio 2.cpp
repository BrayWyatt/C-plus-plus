/*2.  Pedir al usuario una cadena de caracteres, almacenarlas en un arreglo y copoar todo
su contenido hacia otro arreglo de caracteres. */


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char frase[20],frase2[20];
	
	cout<<"Digite una frase: ";
	cin.getline(frase,20,'\n');
	
	strcpy(frase2,frase); //Guardando dentro de frase2
	
	cout<<frase2<<endl;




getch();
return 0;
}
