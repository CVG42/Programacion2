#pragma once
#include "Figura.h"
#include <iostream>
using namespace std;

class Triangulo : public Figura
{
public:

	int l,h;
	void nombre() override;
	void area() override;
	void perimetro() override;
	int getL() override;
	int getH() override;
};

