// 03_sprites.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "juego.h"
#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
    sf::Vector2i resolucion{800,600};
    juego* nuevaPartida;
    nuevaPartida = new juego(resolucion, "Nueva Partida");

    return EXIT_SUCCESS;
}

//https://www.youtube.com/watch?v=khHvNE3aBJU&list=PL-EPeghw5sXg3t0egTspfHdUYMDqyOLwf&index=11