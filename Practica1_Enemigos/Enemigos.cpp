#include "Enemigos.h"
#include <iostream>
#include <string>
using namespace std;

Enemigos::Enemigos()
{
};

Enemigos::Enemigos(int puntosAlMorir, float velocidad, string nombre)
{
	this->puntosAlMorir = puntosAlMorir;
	this->velocidad = velocidad;
	this->nombre = nombre;
};

void Enemigos::imprimir()
{
	cout << "----------" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Puntos: " << puntosAlMorir << endl;
	cout << "Velocidad: " << velocidad << endl;
	cout << "----------" << endl;
};


