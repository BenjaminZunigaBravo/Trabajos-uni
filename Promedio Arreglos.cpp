#include <iostream>
using namespace std;
int main()
{
	int arr, suma=0;
	cout <<"Cantidad de Arreglos"<< endl;
	cin>> arr;
	int num[arr];
	for(int i=1; i<=arr; i++)
	{
		cout<< "Ingrese numero "<< endl;
		cin>> num[i];
	}
	for( int i=1; i<=arr; i++)
	{
		suma= suma+ num[i];
	}
	cout<< "El promedio de los numeros es "<< suma/arr<< endl;
	return 0;
}
