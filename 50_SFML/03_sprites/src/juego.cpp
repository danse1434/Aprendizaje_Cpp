#include "juego.h"
#include "SFML/Graphics.hpp"


juego::juego(sf::Vector2i resolucion, std::string titulo)
{
	nuevaVentana = new sf::RenderWindow(sf::VideoMode(resolucion.x, resolucion.y), titulo);
	nuevaVentana->setFramerateLimit(fps);
	
	/*Inicializar la(s) textura(s)*/
	soldadoTextura = new sf::Texture;
	soldadoTextura->loadFromFile("resources/darksoldiersheetupdate.png");
	
	/*Sprite*/
	soldadoSprite1   = new sf::Sprite; 
	soldadoSprite1->setTexture(*soldadoTextura);

	soldadoSprite2   = new sf::Sprite(*soldadoTextura); // Se puede asignar la textura directamente así:
	soldadoSpriteRot = new sf::Sprite(*soldadoTextura);

	/*Transformaciones en los Sprite*/
	float soldTextAncho = soldadoSprite1->getTexture()->getSize().x / 6.f;
	float soldTextAlto  = soldadoSprite1->getTexture()->getSize().y / 4.f;

	sf::IntRect* posSoldado1 = new sf::IntRect(0, 0, soldTextAncho, soldTextAlto);
	soldadoSprite1->setTextureRect(*posSoldado1); // Recortar Sprite

	sf::IntRect* posSoldado2 = new sf::IntRect(0+(soldTextAncho*2), 0+(soldTextAlto*3), soldTextAncho, soldTextAlto);
	soldadoSprite2->setOrigin(soldadoSprite2->getTexture()->getSize().x / 2.f, 
							  soldadoSprite2->getTexture()->getSize().y / 2.f);
	soldadoSprite2->setPosition(400,400);
	soldadoSprite2->setTextureRect(*posSoldado2);

	// Colores personalizados
	sf::Color* colorCustom1 = new sf::Color(235,52,190); // Rosado Ranger
	sf::Color* colorCustom2 = new sf::Color(107, 235, 52, 255 * 0.8); // Lima verde
	
	/*Soldado Sprite 2*/
	soldadoSprite2->setColor(*colorCustom1);
	soldadoSprite2->setRotation(-30);
	soldadoSprite2->setScale(200.f / soldadoSprite2->getTexture()->getSize().x,
							 200.f / soldadoSprite2->getTexture()->getSize().y);
	
	/*Soldado Sprite Rotado*/
	sf::IntRect* posSoldado3 = new sf::IntRect(0 + (soldTextAncho * 4), 0 + (soldTextAlto * 1), soldTextAncho, soldTextAlto);
	soldadoSpriteRot->setColor(*colorCustom2);
	soldadoSpriteRot->setPosition(200, 200);
	soldadoSpriteRot->setOrigin(soldadoSpriteRot->getTexture()->getSize().x / 6.f,
								soldadoSpriteRot->getTexture()->getSize().y/4.f);
	soldadoSpriteRot->setTextureRect(*posSoldado3);
	/*Transformaciones
	- Origen de rotación
	- Rotación
	- Posición
	- Color
	*/

	/*Creación de eventos*/
	evento1 = new sf::Event();

	gameLoop();
}

void juego::display()
{
	nuevaVentana->clear(sf::Color::White);
	// Cargar el sprite recien inicializado
	nuevaVentana->draw(*soldadoSprite1);
	nuevaVentana->draw(*soldadoSprite2);

	soldadoSpriteRot->setRotation(soldadoSpriteRot->getRotation()-0.8f);
	nuevaVentana->draw(*soldadoSpriteRot);
	//
	nuevaVentana->display();
}
void juego::gameLoop()
{
	while (nuevaVentana->isOpen())
	{
		procesamientoMouse();
		procesamientoEventos();
		display();
	}
}


/*Esta función permite mover la ventana con libertad*/
void juego::procesamientoEventos()
{
	while (nuevaVentana->pollEvent(*evento1))
	{
		switch (evento1->type)
		{
		case sf::Event::Closed:
		{
			nuevaVentana->close();
			exit(1);
			break;
		}
		case sf::Event::KeyPressed:
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) {
				exit(1);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) {
				movimientoCaracter({ +16,+0 });
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) {
				movimientoCaracter({ -16,+0 });
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) {
				movimientoCaracter({ +0,-16 });
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) {
				movimientoCaracter({ -0,+16 });
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
				movimientoCaracter({ +0,-4 });
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
				movimientoCaracter({ +0,+4 });
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
				movimientoCaracter({ -4,+0 });
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
				movimientoCaracter({ +4,+0 });
			}
		}
		case sf::Event::MouseButtonPressed:
		{
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				soldadoSprite1->setPosition((sf::Vector2f)posicionMouse);
			}
		}
		default:
		{
			break;
		}
		}
	}
}

void juego::movimientoCaracter(sf::Vector2i movimiento) 
{
	soldadoSprite1->setPosition(soldadoSprite1->getPosition().x + movimiento.x,
								soldadoSprite1->getPosition().y + movimiento.y);
}

void juego::procesamientoMouse()
{
	posicionMouse = sf::Mouse::getPosition(*nuevaVentana);
	posicionMouse = (sf::Vector2i)nuevaVentana->mapPixelToCoords(posicionMouse);

}