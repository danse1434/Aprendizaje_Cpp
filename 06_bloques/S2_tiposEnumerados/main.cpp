#include <iostream>
#include <limits>

 enum Color
    {
        COLOR_NEGRO,
        COLOR_AZUL,
        COLOR_AMARILLO,
        COLOR_NARANJA,
        COLOR_ROJO,
    };

Color color(COLOR_NEGRO);

void imprimirColor(Color color){
    switch (color)
    {
    case COLOR_NEGRO: std::cout << "COLOR_NEGRO" << std::endl; break;
    case COLOR_AZUL: std::cout << "COLOR_AZUL" << std::endl; break;
    case COLOR_AMARILLO: std::cout << "COLOR_AMARILLO" << std::endl; break;
    case COLOR_NARANJA: std::cout << "COLOR_NARANJA" << std::endl; break;
    case COLOR_ROJO: std::cout << "COLOR_ROJO" << std::endl; break;
    default: break;
    }
}


int main(int argc, char const *argv[])
{
    std::cout << "----------------------------------------------------------------\n";
    std::cout << "\tEnumeradores" << std::endl;
    std::cout << "----------------------------------------------------------------\n";

   

    /* Asignar uno de los valores preasignados */
    Color pintura(COLOR_AMARILLO);
    std::cout << "Color pintura(COLOR_AMARILLO) \t\t\t\t" << pintura << std::endl;
    /* Asignar uno de los valores preasignados como entero*/
    int pinturita = COLOR_NARANJA;
    std::cout << "int pinturita = COLOR_NARANJA; \t\t\t\t" << pinturita << std::endl;
    /* Asignar un entero a una variable enum recién creada */
    Color pinturota = static_cast<Color>(5);
    std::cout << "Color pinturota = static_cast<Color>(5); \t\t" << pinturota << std::endl;
    /* Utilizar la función creada para imprimir colores */
    std::cout << "imprimirColor(color) \t\t\t\t\t";
    imprimirColor(color);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}