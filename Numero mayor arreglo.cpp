#include <iostream>
using namespace std;
int main()
{
	int n1[12];
	int n2[12];
	cout << "Ingrese 12 digitos para cada arreglo"<< endl;
	for (int i=0 ; i<12; i++)
	{
		cout << "-------------------------------------"<< endl;
		cin>> n1[i]>> n2[i];
		
	}
	for (int i=0 ; i<12; i++)
	{
		if (n1[i]<n2[i])
		{
			cout<<i+1<< ")  "<< n2[i]<< " es mayor a "<< n1[i]<< endl;
		}
		else if (n1[i]== n2[i])
		{
			cout<<i+1<< ") Los numero son iguales"<< endl;
		}
		else 
		{
			cout<<i+1<< ")  "<< n1[i]<< " es mayor a "<< n2[i]<< endl;
		 
		}
	}
	return 0;
}
