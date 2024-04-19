#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int ingreso, npersonas; 
	float ipe;
	cout<< "Ingrese numero de personas del grupo familiar"<< endl;
	cin>> npersonas; 
	cout<< "Ingrese el total del ingreso familiar"<< endl;
	cin>> ingreso;
	ipe= ingreso/ (npersonas* 0.18);
	if(ipe>0 && ipe<= 217000)
	{
			cout<< "Su grupo socioeconomico es E"<< endl;
	}
	else if (ipe>=217001 && ipe<=379000)
	{
			cout<< "Su grupo socioeconomico es D"<< endl;
	}
	else if (ipe>=379001 && ipe<= 681000)
	{
			cout<< "Su grupo socioeconomico es C2"<< endl;
	}
	else if (ipe>=681001 && ipe<= 1153000)
	{
			cout<< "Su grupo socioeconomico es C1"<< endl;
	}
	else if (ipe>=1153001 && ipe<=2011000)
	{
			cout<< "Su grupo socioeconomico es B"<< endl;
	}
	else if (ipe>=2011001)
	{
			cout<< "Su grupo socioeconomico es A"<< endl;
	}
}
