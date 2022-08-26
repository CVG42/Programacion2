#include "Triangulo.h"
#include <iostream>
using namespace std;

void Triangulo::nombre()
{
	cout << "\n----- Triangulo -----" << endl;
}

void Triangulo::area()
{
	cout << "Area = " << (l*h/2) << endl;
}

void Triangulo::perimetro()
{
	cout << "Perimetro = " << (l*3) << endl;
}

int Triangulo::getL()
{
	return l;
}

int Triangulo::getH()
{
	return h;
}

