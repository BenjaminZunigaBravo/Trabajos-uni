#include <iostream>
#include <string>
using namespace std;

string concatenar(string x[10])
{
	string resultado= x[0];
	for (int i=1; i <10; i++)
	{
		resultado += " " + x[i];
	}
	return resultado;
}
int main()
{
	string arreglo[10];
	cout<< "Ingrese dialogo de 10 palabras"<< endl;
	for( int i=0; i < 10; i++)
	{
		cin>> arreglo[i];
	}
	string resultado ;
	resultado= concatenar(arreglo);
	cout<< resultado<< endl;
}
