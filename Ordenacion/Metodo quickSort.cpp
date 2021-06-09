//Ordenamiento Quicksort */

using namespace std;




//iniciamos el método intercambio

int intercambio(float &x, float &y)
{
	float aux;

	aux = x;
	x = y;
	y = aux;	
	
}


//Iniciamos el método quickSort

void quickSort(float a[],int primero,int ultimo)
{
	int i,j,central;
	float pivote;
	
	central = (primero+ultimo) / 2;
	pivote = a[central];
	
	i = primero;
	j = ultimo;
	
	do
	{
	
	
		while(a[i] < pivote)	i++;
		while(a[j] < pivote)	i--;
		
		if(i<=j)
		{
			intercambio(a[i],a[j]);
			i++;
			j--;
		}
				
	}while(i<=j);
	
	
	if(primero < j)
	{
		quickSort(a,primero,j); //Ordenamos la sublista izq
	}
	
	if(i < ultimo)
	{
		quickSort(a,i,ultimo); //Ordenamos la sublista derecha
	}
	
}

//Iniciamos el método Main
int main()
{

	float arreglo[] = {4,7,1,8,2,10,5,9,3};
	
	quickSort(arreglo,0,8);
	
	
	cout<<"\nArreglo Ordenado  - Forma Ascendente"<<endl;
	for(i=0;i<9;i++){
		cout<<arreglo[i]<<" | ";
	}

	cout<<"\nArreglo Ordenado  - Forma Descendente"<<endl;
	  for(i=8;i>=0;i--)
	  {
	  	cout<<arreglo[i]<<" | ";
	  }
	
	
	cout<<endl;

	getch();
	return 0;
}
