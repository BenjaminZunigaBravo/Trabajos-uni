#include <iostream>
using namespace std;
int main ()
{
	int sueldo, credito, clientes, cuotas, cesantia, valorcuota, gastos, mayor, cr, ca, a, promedio;
	float interes, suma= 0 ;
	cout<< "Ingrese la canitdad de clientes"<< endl;
	cin >> clientes;
	for(int i =1; i<=clientes; i ++ , a++ )
	{
		cout << "Ingrese monto total del credito"<< endl;
		cin>> credito;
		cout<< "Ingrese numero de cuotas"<< endl;
		cin>> cuotas;
		cout<< "Ingrese sueldo del cliente"<< endl;
		cin>> sueldo;
		cout<< "Solicita seguro de cesantia. Si(1) No(0)"<< endl;
		cin>> cesantia;
		suma= suma+ credito;
		gastos= credito*0.05;
		if (mayor< credito)
		{
			mayor= credito;
		}
		if(cesantia == 1)
		{
			gastos= gastos +50000;
		}
		if (sueldo>1000000 && sueldo <= 2500000)
		{
			interes=1.025;
		}
		else if(sueldo> 2500000)
		{
			interes= 1,012;
		}
		else if(sueldo<1000000)
		{
			interes= 1,036;
		}
		valorcuota= (credito*interes+gastos)/cuotas;
		
		cout<< "La cuota es "<< valorcuota<< endl;
		if (valorcuota> (sueldo*0.25))
		{
			cout << "credito rechazado"<< endl;
			cr++;
		}
		else 
		{
			cout<< "Credito aprovado"<< endl;
			ca++;
		}

}
		promedio= suma/a;
	
		cout<< cr<< " creditos fueron rechazados"<< endl;
		cout<< ca<< " creditos fueron aprovados"<< endl;
		cout<< "El promedio de los creditos es "<< promedio<< endl;
		cout<< "El mayor credito fue "<< mayor<< endl;

}
