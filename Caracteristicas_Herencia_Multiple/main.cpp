#include <iostream>
#include "ClaseDerivada.h"

using namespace std;

int main(int argc, char** argv) 
{
	ClaseDerivada* ob1 = new ClaseDerivada(5,10,15);
	
	cout<<"\n";
	cout<<"x: "<<ob1->getX()<<endl;
	
	delete ob1;
	return 0;
}
