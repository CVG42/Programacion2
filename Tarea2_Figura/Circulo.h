#pragma once
#include "Figura.h"
#include <iostream>
using namespace std;

class Circulo : public Figura
{
public:

	int r;
	void nombre() override;
	void area() override;
	void perimetro() override;
	int getR() override;
};

