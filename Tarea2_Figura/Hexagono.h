#pragma once
#include "Figura.h"
#include <iostream>
using namespace std;

class Hexagono : public Figura
{
public:

	int l,r;
	void nombre() override;
	void area() override;
	void perimetro() override;
	int getL() override;
	int getR() override;
};
