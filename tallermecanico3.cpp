#include<iostream>
#include<math.h>
#include<conio.h>
#include <stdlib.h>

using namespace std;



int ingresoedad()
{

	int d;
	cout << "ingrese edad entre 18 y 75 "; cin >> d;
	while (d > 75 || d < 18)
	{
		cout << "ingrese edad entre 18 y 75 "; cin >> d;
	}
	return d;
}



char sexo()
{

	char t;
	cout << "ingrese sexo m=masculino, f=femenino "; cin >> t;
	while (t != 'm' && t != 'M' && t != 'F' && t != 'f')
	{
		cout << "ingrese sexo m=masculino, f=femenino "; cin >> t;
	}
	return t;
}



char servicio()
{

	char t;
	cout << "ingrese servcio e=electricidad, p=planchad y pintura , f=frenos "; cin >> t;
	while (t != 'e' && t != 'E' && t != 'p' && t != 'P' && t != 'F' && t != 'f')
	{
		cout << "ingrese servcio e=electricidad, p=planchad y pintura , f=frenos "; cin >> t;
	}
	return t;
}



char satisfaccion()
{

	char t;
	cout << "ingrese satisfaccion b=bueno, r=regular , m=malo "; cin >> t;
	while (t != 'b' && t != 'B' && t != 'R' && t != 'r' && t != 'm' && t != 'M')
	{
		cout << "ingrese satisfaccion b=bueno, r=regular , m=malo "; cin >> t;
	}
	return t;
}






int main()
{
	char sex, servi, satisfa;
	int edad, cantidad = 0;
	int adultosmay = 0;
	int mujServfrenos = 0;
	int sumamujServfrenos = 0;
	double promediomujServfrenos = 0;
	int contadoBUENO = 0;
	int contadorregulaar = 0;
	int contadormalo = 0;
	string mayorfrecuencia = "";
	do
	{
		edad = ingresoedad();
		sex = sexo();
		servi = servicio();
		;
		satisfa = satisfaccion();

		if (edad == -10)
			break;
		if (edad >= 60)
			adultosmay++;

		if ((sex == 'F' || sex == 'f') && (servi == 'f' || servi == 'F')) {
			mujServfrenos++;
			sumamujServfrenos = sumamujServfrenos + edad;
			promediomujServfrenos = sumamujServfrenos / mujServfrenos;

		}

		if (satisfa == 'B' || satisfa == 'b')contadoBUENO++;
		if (satisfa == 'r' || satisfa == 'R')contadorregulaar++;
		if (satisfa == 'M' || satisfa == 'm')contadormalo++;

		if ((contadoBUENO > contadorregulaar) && (contadoBUENO > contadormalo))
			mayorfrecuencia = "bueno";
		if ((contadormalo > contadorregulaar) && (contadormalo > contadoBUENO))
			mayorfrecuencia = "malo";
		if ((contadorregulaar > contadoBUENO) && (contadorregulaar > contadormalo))
			mayorfrecuencia = "regular";

		if ((sex == 'F' || sex == 'f') && (servi == 'e' || servi == 'E')) {
			mujServfrenos++;
			sumamujServfrenos = sumamujServfrenos + mujServfrenos;

		}

		cout << "clientes adultos mayores:" << adultosmay << endl;
		cout << "promedio edad mujeres con servicio frenos:" << promediomujServfrenos << endl;
		cout << "nivel de satisfaccion de mator frecuencia:" << mayorfrecuencia << endl;



		cantidad = cantidad + 1;
	} while (edad != -10);



	_getch();
}
