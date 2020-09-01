#ifndef OBJETOJUEGO_H
#include "SFML/Graphics.hpp"

class juego
{
public:
	juego(int resolucionX, int resolucionY, std::string titulo);
	void dibujar();
	void gameLoop();
private:
	sf::RenderWindow* nuevaVentana;
};

#endif // !OBJETOJUEGO_H
