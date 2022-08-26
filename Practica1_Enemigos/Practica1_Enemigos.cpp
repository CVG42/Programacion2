#include <iostream>
#include <string>
#include "Enemigos.h"
#include "Goomba.h"
#include "Tortuga.h"
#include "PlantaFuego.h"
using namespace std;

int main()
{
    Goomba goomba;
    Tortuga tortuga;
    PlantaFuego planta;

    cout << "Estos son los enemigos: \n" << endl;

    goomba.imprimir();
    tortuga.imprimir();
    planta.imprimir();
}
