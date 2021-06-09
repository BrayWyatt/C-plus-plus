#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra[] = "Luis";
	char palabra2[] = {'L','u','i','s'};
	char nombre[30];
	
	cout<<"Digite su nombre: ";
    gets(nombre);	
	
	cout<<nombre<<endl;
	
	getch();
	return 0;
}
