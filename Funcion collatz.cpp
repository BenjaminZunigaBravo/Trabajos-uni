#include <iostream>
using namespace std;
int Sumade(int suma,int num)
{
	while(num !=1)
	{
		if (num%2==0)
		{
			num= num/2;
			cout<< num<< endl;
			suma=suma +1;
		}
		else
		{
			num= (num*3)+1;
			cout<< num<< endl;
			suma=suma +1;
		}
		
	}
	return suma;
}
int main()
{
	int num, suma=0;
	cout << "Ingrese un numero "<< endl;
	cin>> num;
	suma= Sumade(suma,num);

	cout<<"Se realizaron "<< suma<<" Operaciones"<< endl;
}
