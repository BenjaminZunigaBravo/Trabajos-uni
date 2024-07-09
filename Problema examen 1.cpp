#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenarx(int x[10])
  {
  srand(time(NULL));
  for (int i = 0; i < 9; i++)
   {
      x[i] = rand() % (11); 
   }
 }
 void llenary(int y[20])
  {
  srand(time(NULL));
  for (int i = 0; i < 19; i++)
   {
      y[i] = rand() % (11); 
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
  //----------------------------------------------------------------
  void mostrary(int y[20])
  {
  for (int i = 0; i < 20; i++)
   {
  cout << y[i] << " ";
 
   }
   cout << endl;
  }
  //-----------------------------------------------------------------
void helado(int x[10], int y[20])
{
	int suma=0, aux;
	for (int i =0; i <9; i++)
	{
		suma= suma + x[i];
	}
	cout<< "La suma de los valores de x es "<< suma<< endl;
	
	for (int i =0; i<9; i++)
	{
		for (int j= i+1; j < 10; j++)
		{
			if (x[i]> x[j])
			{
				aux= x[i];
				x[i]= x[j];
				x[j]=aux; 
			}
		}
	}
	cout<< "El valor minimo de x es "<< x[0]<< endl;
	
	for (int i =0; i<19; i++)
	{
		for (int j= i+1; j < 20; j++)
		{
			if (y[i]> y[j])
			{
				aux= y[i];
				y[i]= y[j];
				y[j]=aux; 
			}
		}
	}
	cout<< "El valor minimo de y es "<< y[0]<< endl;
}

int main()
{
	int x[10], y[20];
	llenarx(x);
	llenary(y);
	mostrarx(x);
	mostrary(y);
	helado(x, y);
	mostrarx(x);
	mostrary(y);}
