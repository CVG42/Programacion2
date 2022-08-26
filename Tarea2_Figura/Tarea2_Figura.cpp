#include <iostream>
#include "Cuadrado.h"
#include "Figura.h"
#include "Triangulo.h"
#include "Hexagono.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Cuadrado cuadrado;
    cuadrado.l = 3;

    Triangulo tri;
    tri.h = 5;
    tri.l = 6;

    Hexagono hex;
    hex.r = 2;
    hex.l = 4;

    Circulo cir;
    cir.r = 3;

    Figura* fig;
    fig = &cuadrado;
    fig->nombre();
    cout << "Lado = " << fig->getL() << std::endl;
    fig->area();
    fig->perimetro();

    fig = &tri;
    fig->nombre();
    cout << "Lado = " << fig->getL() << std::endl;
    cout << "Altura = " << fig->getH() << std::endl;
    fig->area();
    fig->perimetro();

    fig = &hex;
    fig->nombre();
    cout << "Lado = " << fig->getL() << std::endl;
    cout << "Radio = " << fig->getR() << std::endl;
    fig->area();
    fig->perimetro();

    fig = &cir;
    fig->nombre();
    cout << "Radio = " << fig->getR() << std::endl;
    fig->area();
    fig->perimetro();
}
  


