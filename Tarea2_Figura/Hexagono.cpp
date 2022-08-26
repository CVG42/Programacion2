#include "Hexagono.h"
#include <iostream>
using namespace std;

void Hexagono::nombre()
{
	cout << "\n----- Hexagono -----" << endl;
}

void Hexagono::area()
{
	Figura::area();
	cout << "Area = " << (6*(l*r/2)) << endl;
}

void Hexagono::perimetro()
{
	cout << "Perimetro = " << (l * 6) << endl;
}

int Hexagono::getL()
{
	return l;
}

int Hexagono::getR()
{
	return r;
}
