#pragma once
#include <iostream>
#include <string>
using namespace std;

class Enemigos
{
public:
	int puntosAlMorir;    
	float velocidad;    
	string nombre;
	Enemigos();
	Enemigos(int puntosAlMorir, float velocidad, string nombre);
	void imprimir();
};

