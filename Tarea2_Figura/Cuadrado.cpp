#include "Figura.h"
#include "Cuadrado.h"
#include <iostream>

using namespace std;

void Cuadrado::nombre()
{
	cout << "\n----- Cuadrado -----" << endl;
}

void Cuadrado::area()
{
	Figura::area();
	cout << "Area = " << (l * l) << endl;
}

void Cuadrado::perimetro()
{
	cout << "Perimetro = " << (l * 4) << endl;
}

int Cuadrado::getL()
{
	return l;
}