#pragma once
#include "Figura.h"
#include <iostream>
using namespace std;

class Cuadrado : public Figura
{
public:

	int l;
	void nombre() override;
	void area() override; 
	void perimetro() override;
	int getL() override;
};

