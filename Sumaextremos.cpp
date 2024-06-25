#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void llenar(int x[1000])
  {
  srand(time(NULL));
  for (int i = 0; i < 1000; i++)
	{
      x[i] = rand() % (11);
    }
 }
 void ordenarA(int x[1000])
 {
 	int aux;
 	for( int i=0; i<999; i++)
 	{
 		for (int j=i+1; j<1000; j++)
 		{
 			if (x[i]> x[j])
 			{
 				aux= x[i];
 				x[i]= x[j];
 				x[j]= aux;
			 }
		 }
	 }
 }
int sumaextremos(int x[1000])
{
	int suma;
	suma= x[0]+x[1]+x[999]+x[998];
	return suma;
}
int main()
{
	int helado[1000];
	llenar(helado);
	ordenarA(helado);
	cout<< "La suma de los 2 menores y los 2 mayores es "<< sumaextremos(helado)<< endl;
	
}
