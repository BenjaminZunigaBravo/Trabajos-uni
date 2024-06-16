#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenar(int x[10][10])
 {
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
   {
    for(int j = 0; j< 10; j++)
    {
    x[i][j] = 0;
    }
   }
   int fila, columna;
   fila = rand() % (10);
   columna = rand() % (10);
   x[fila][columna] = 1;
   fila = rand() % (10);
   columna = rand() % (10);
   x[fila][columna] = 2;
 }
void mostrar(int x[10][10])
{
  for (int i = 0; i < 10; i++)
   {
    for(int j = 0; j< 10; j++)
    {
cout << x[i][j]<< " ";
    }
  cout << endl;
   }  
}
int distancia1del2(int x[10][10]) {
    int fila1 = -1, col1 = -1;
    int fila2 = -1, col2 = -1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (x[i][j] == 1) {
                fila1 = i;
                col1 = j;
            } else if (x[i][j] == 2) {
                fila2 = i;
                col2 = j;
            }
        }
    }
    int filas= abs(fila1 - fila2);
    int columnas= abs(col1 - col2);
    int distancia = abs(fila1 - fila2) + abs(col1 - col2);
    if (filas== 4 )
    {
    	return 3;
	}
	else if(columnas ==4 )
	{
		return 3;
	}
	 if (filas== 3 )
    {
    	return 3;
	}
	else if(columnas ==3 )
	{
		return 3;
	}
   
    else if (distancia ==1 || distancia ==2)
    {
	
     for(int i = fila1-1; i <= fila1+1; i++)
  {
  for(int j = col1-1; j<= col1+1; j++)
  {
  if (i >= 0 && j >= 0 && i <= 9 && j <= 9)
  {
    if (!(fila1== i && col1 == j))
		{
      if (x[i][j] == 2)
       		{
        	return 1;
        	}
		}
  	}
   }
  }
 }
	else if (distancia>= 2 && distancia <=4 )
     for(int i = fila1-2; i <= fila1+2; i++)
  {
  for(int j = col1-2; j<= col1+2; j++)
  {
  if (i >= 0 && j >= 0 && i <= 9 && j <= 9)
  {
    if (!(fila1== i && col1 == j))
{
      if (x[i][j] == 2)
       {
        return 2;
        }
}
  }
  }
  }
else  
{
	return 3;
}
 
}
int main()
 {
  int matriz[10][10];
  llenar(matriz);
  //La función matriz llena la matriz con puros ceros, un 1 y un 2
  //mostrar(matriz);
  int distancia = distancia1del2(matriz);
  //Programe la función matriz que devuelve 1 si el número 1 se encuentra
  //a 1 celda de distancia del número 2 (arriba, abajo, derecha, izquierda, diagonal)
  //Devuelve 2 si se encuentra a dos celdas de distancia (contorno de 2 celdas)
  //En cualquier otro caso devuelve 3
  //Vea ejemplo en el excel
 } 
