#include "estimacionAltura.h"
#include <iostream>
#include <limits>
#include <math.h>

int main(int argc, char const *argv[])
{
    double alturaTorre{};

    std::cout << "Ingrese la altura de la torre (en metros) ";
    std::cin >> alturaTorre;

    estatusProyectil(alturaTorre, 0);
    estatusProyectil(alturaTorre, 1);
    estatusProyectil(alturaTorre, 2);
    estatusProyectil(alturaTorre, 3);
    estatusProyectil(alturaTorre, 4);
    estatusProyectil(alturaTorre, 5);


     std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     std::cin.get();
     return EXIT_SUCCESS;
}