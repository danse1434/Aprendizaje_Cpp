#include "SFML/Graphics.hpp"
#include "objetoJuego.h"

juego::juego(int resolucionX, int resolucionY, std::string titulo)
{
	int fps = 60;
	// sf::RenderWindow* nuevaVentana; // Se debe declarar en la definición del objeto
	nuevaVentana = new sf::RenderWindow(sf::VideoMode(resolucionX, resolucionY), titulo);
	nuevaVentana->setFramerateLimit(fps);
	gameLoop();
}
void juego::dibujar()
{
	nuevaVentana->clear(sf::Color::Blue);
	nuevaVentana->display();
}

void juego::gameLoop()
{
	while (nuevaVentana->isOpen()) {
		dibujar();
	}
}

