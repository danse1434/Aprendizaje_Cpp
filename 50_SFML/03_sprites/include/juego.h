#ifndef JUEGO_H
#include "SFML/Graphics.hpp"

class juego
{
public:
	juego(sf::Vector2i resolucion, std::string titulo);
	void display();
	void gameLoop();
	void procesamientoEventos();
	void procesamientoMouse();
	void movimientoCaracter(sf::Vector2i movimiento);

private:
	/* Vectores de posición 2D */
	// Vector 2f, 2i, 2u es un vector de dos datos tipos float, entero, y enteros sin signos
	/*sf::Vector2f* vectorPosicion = new sf::Vector2f(0.3, 0.3);*/

	sf::RenderWindow* nuevaVentana;
	int fps{60};
	
	/*Cargar los sprites y las texturas*/
	sf::Texture* soldadoTextura;
	sf::Sprite*  soldadoSprite1;
	sf::Sprite*  soldadoSprite2;
	sf::Sprite*  soldadoSpriteRot;

	/*Crear eventos*/
	sf::Event* evento1;
	/*Posicion Mouse*/
	sf::Vector2i posicionMouse;
};

#endif // !JUEGO_H

