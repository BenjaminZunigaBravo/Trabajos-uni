#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void llenar(int x[10], int y[10], int z[10])
  {
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
	{
      x[i] = rand() % (11);
      y[i] = rand() % (11);
      z[i] = rand() % (11);
	}
 }
 void mostrarx(int x[10])
  {
  for (int i = 0; i < 10; i++)
   {
  cout << x[i] << " ";
   }
   cout << endl;
  }
  void mostrary( int y[10])
  {
  for (int i = 0; i < 10; i++)
   {
  cout<< y[i] << " ";
   }
   cout << endl;
  }
  void mostrarz( int z[10])
  {
  for (int i = 0; i < 10; i++)
   {
  cout << z[i] << " ";
   }
   cout << endl;
  }
 
int sumaarreglos (int x[10], int y[10], int z[10], int w[10])
{
	int suma1=0, suma2=0;
	for(int i=0 ; i<10; i++)
		{
			suma1= x[i] + y[i] + z[i];
			w[i]= suma1;
			suma2= suma2 + w[i];
		}
	return suma2;
}
int main()
{
int x[10], y[10], z[10], w[10];
llenar(x,y,z);
mostrarx(x);
mostrary(y);
mostrarz(z);
cout<< "La suma de los valores del arreglo es "<< sumaarreglos(x,y,z,w)<< endl;
}
