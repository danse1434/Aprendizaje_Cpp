// 01_ventanas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "SFML/Graphics.hpp"

int main(int argc, char* args[])
{
    bool gameOver = false;
    sf::RenderWindow* customWindow;
    customWindow = new sf::RenderWindow(sf::VideoMode(800,600), "Nueva Ventana Personalizada");
	
    // Límite de Tasa de Resolución
    int fps = 60;
    customWindow->setFramerateLimit(fps);

    // Mientras que gameOver no sea falso mostrar la ventana especificada
    while (!gameOver)
    {
        customWindow->clear(sf::Color::Blue);
        customWindow->display();
    }
    
    return EXIT_SUCCESS;
}

/*
# Configuración de SFML en este proyecto, vaya a pestaña "Proyecto" y luego a "Propiedades de Proyecto":
- En "C//C++/Directorios de inclusión adicionales" colocar "C:\SFML-2.5.1\include"
- En "Vinculador/General/Directorios de bibliotecas adicionales" colocar "C:\SFML-2.5.1\lib"
- En "Vinculador/Entrada/Dependencias adicionales" adicionar las siguientes librerías:
    - sfml-graphics-d.lib
    - sfml-window-d.lib
    - sfml-main-d.lib
    - sfml-system-d.lib
- Como son librerías dinámicas recuerde colocar los dll en la ubicación del *.exe para su correcta ejecución
- Los *header* en MS Visual Studio deben colocarse en una carpeta cuya dirección debe ser especificada en
    "Directorios de VC++/Directorios de archivos de inclusión"
*/