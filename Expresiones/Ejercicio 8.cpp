//Escribe un programa que lea de la entrada est?ndar los dos catetos de un triangulo rect?ngulo y escriba en la salida est?ndar su hipotenusa.//



#include<iostream>

using namespace std;

int main()
{

float cateto1,cateto2,hipotenusa;


cout<<"Digite el cateto 1: ";cin>>cateto1;

cout<<"Digite el cateto 2: ";cin>>cateto2;


hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

cout.precision(2);


cout<<"\nLa hipotenusa del triangulo es: "<<hipotenusa<<endl;
	


return 0;	
}
