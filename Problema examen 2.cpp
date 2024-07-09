#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void hola(int x[3], int y[10], int z[20])
{
	int exy=0, eyz=0;
	for(int k =0; k<3; k++)
	{
		for (int h=0; h< 10; h++)
		{
			if (x[k]== y[h])
			{
				exy= exy +1;
			}
			
		}
		
	}
	cout<< "coinciden "<< exy<< " elementos de x en y"<< endl;
	for(int i =0; i<20; i++)
	{
		for (int j=0; j< 10; j++)
		{
			if (y[j]== z[i])
			{
				eyz= eyz+1;
			}
			
		}
		
	}
	cout<< "coinciden "<< eyz<< " elementos de y en z"<< endl;
}

void llenarx(int x[3], int y[10], int z[20])
  {
  srand(time(NULL));
  for (int i = 0; i < 3; i++)
   {
      x[i] = rand() % (11); 
   }
   for (int i = 0; i < 10; i++)
   {
      y[i] = rand() % (11); 
   }
  for (int i = 0; i < 20; i++)
   {
      z[i] = rand() % (11); 
   }
 }
 
 void mostrarx(int x[3], int z[20], int y[10])
  {
  for (int i = 0; i < 3; i++)
   {
  cout << x[i] << " ";
 
   }
   cout << endl;
    for (int i = 0; i < 10; i++)
   {
  cout << y[i] << " ";
 
   }
   cout << endl;
   for (int i = 0; i < 20; i++)
   {
  cout << z[i] << " ";
 
   }
   cout << endl;
  
  }
void ordenar(int x[3], int y[10], int z[20])
{
	int aux;
	for (int i =0; i<2; i++)
	{
		for (int j= i+1; j < 3; j++)
		{
			if (x[i]> x[j])
			{
				aux= x[i];
				x[i]= x[j];
				x[j]=aux; 
			}
		}
	}
	for (int i =0; i<9; i++)
	{
		for (int j= i+1; j < 10; j++)
		{
			if (y[i]> y[j])
			{
				aux= y[i];
				y[i]= y[j];
				y[j]=aux; 
			}
		}
	}
	for (int i =0; i<19; i++)
	{
		for (int j= i+1; j < 20; j++)
		{
			if (z[i]> z[j])
			{
				aux= z[i];
				z[i]= z[j];
				z[j]=aux; 
			}
		}
	}
}
int main()
{
int x[3], y[10], z[20];
llenarx(x,y,z);
ordenar(x,y,z);
mostrarx(x,z,y);
hola(x,y,z);
}
