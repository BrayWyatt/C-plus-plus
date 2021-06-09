#include <iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
using namespace std;


int main(int argc, char** argv) 
{
	Planta* planta1 = new Planta();
	
	cout<<"\n";
	planta1->alimentarse();
	
	
	cout<<"\n";	
	AnimalCarnivoro* animal1 = new AnimalCarnivoro();
	animal1->alimentarse();
	

	
	return 0;
}
