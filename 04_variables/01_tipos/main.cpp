#include "impresionTipos.h"
#include <iostream>
#include <limits>
#include <cstdint>

int main(int argc, char const *argv[])
{
    // Función de impresion de tipos
    // impresionTipos();

    std::cout << impresionTiposUno::PI << std::endl;
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return EXIT_SUCCESS;
}
