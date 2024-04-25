#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, m, c, d, u;
	while(true)
	{
		cout<< "Ingrese un numero de cuatro digitos"<< endl;
		cin>> n;
		if(n<1000 && n>9999)
		{
			cout<< "Numero no valido "<< endl;
		}
		else if (n>=1000 && n<=9999) 
		{
			break;
		}
	}
	m= n/1000;
	c= (n/100)%10;
	d= (n/10)%10;
	u= n%10; 
	if (n== pow(m,4)+pow(c,4)+pow(d,4)+pow(u,4))
	{
		cout<<n<< " es narcisista"<< endl;
	}
	else 
	{
		cout <<n <<" no es narcisista"<< endl; 
	}
	
}
