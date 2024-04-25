#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int meses, a, pp, ii;
	float promedioanual, promprimer, promsegun, prompar, promimpar,temperatura,tempacumulada=0,primersemestre=0,segundosemestre=0,par=0, impar=0;
	for (int i=1; i<=12; i++, a++)
	{
	if (i<=6)
		{
		cout<< "Ingrese la temperatura del mes "<< i<< endl;
		cin>>temperatura; 
		tempacumulada= tempacumulada+ temperatura;
		primersemestre= primersemestre + temperatura;
		}
		else if (i>6)
		{
		cout<< "Ingrese la temperatura del mes "<< i<< endl;
		cin>>temperatura; 
		tempacumulada= tempacumulada+ temperatura;
		segundosemestre= segundosemestre+ temperatura;
		}
		if (i %2==0)
		{
			par= par+temperatura;
			pp++;
		}
		else if(i % 2 != 0)
		{
			impar= impar+temperatura;
			ii++;
		}
	}
	promedioanual= tempacumulada/a;
	promprimer= primersemestre/6;
	promsegun= segundosemestre/6;
	prompar= par/pp;
	promimpar=impar/ii;
	cout<< "Promedio anual de temperaturas es "<<promedioanual<< endl;
	cout<< "Promedio temperatura primer semestre "<< promprimer<< endl;
	cout<< "Promedio temperatura segundo semestre "<< promsegun<< endl; 
	cout<< "Promedio temperatura meses pares "<< prompar<< endl;
	cout<< "Promedio temperatura meses impares "<< promimpar<< endl;
}
