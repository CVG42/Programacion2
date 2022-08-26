#include "Circulo.h"
#include <iostream>
using namespace std;

void Circulo::nombre()
{
	cout << "\n----- Circulo -----" << endl;
}

void Circulo::area()
{
	Figura::area();
	cout << "Area = " << (3.14 * (r * r)) << endl;
}

void Circulo::perimetro()
{
	cout << "Perimetro = " << (3.14 * (r * 2)) << endl;
}

int Circulo::getR()
{
	return r;
}
