// 02_ventanaClase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "include/objetoJuego.h"
#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
    juego* partida1;
    partida1 = new juego(800,600, "Nueva ventana con clases");
    
    return EXIT_SUCCESS;
}

/*
# Configuración de SFML en este proyecto, vaya a pestaña "Proyecto" y luego a "Propiedades de Proyecto":
- Configurar el proyecto para añadir a los directorios "./src/" e "./include/" en:
    - Directorios de inclusión adicionales
    - Directorios de bibliotecas adicionales
- En "C//C++/Directorios de inclusión adicionales" colocar "C:\SFML-2.5.1\include"
- En "Vinculador/General/Directorios de bibliotecas adicionales" colocar "C:\SFML-2.5.1\lib"
- En "Vinculador/Entrada/Dependencias adicionales" adicionar las siguientes librerías:
    - sfml-graphics-d.lib
    - sfml-window-d.lib
    - sfml-main-d.lib
    - sfml-system-d.lib
- Como son librerías dinámicas recuerde colocar los dll en la ubicación del *.exe para su correcta ejecución
*/