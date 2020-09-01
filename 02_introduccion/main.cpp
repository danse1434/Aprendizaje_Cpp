#include "funciones.h"
#include <iostream>
#include <limits>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numeroUno{}, numeroDos{};

    std::cout << "Enter an Integer:";
    std::cin >> numeroUno;
    std::cout << numeroUno << std::endl;

    std::cout << "Enter another integer:";
    std::cin >> numeroDos;
    std::cout << numeroDos << std::endl;

    std::cout << numeroUno << "+" << numeroDos << " is " << numeroUno + numeroDos << std::endl;
    std::cout << numeroUno << "-" << numeroDos << " is " << numeroUno - numeroDos << std::endl;

    std::cout << "\n\n\n -------------------------------------------------------------------------------";
    std::cout << "Ahora imaginemos el radio de una esfera: ";
    float radio{};
    std::cin >> radio ;

    std::cout << "Para esta esfera, el valor de volumen es: " << volumen(radio) << std::endl;
    std::cout << "Para esta esfera, el valor de superficie es: " << superficie(radio) << std::endl;
    
    std::cout << "\n\n\n -------------------------------------------------------------------------------";
    std::cout << "La suma de los numeros colocados es" << std::endl;
    std::cout << add(numeroUno, numeroDos) << std::endl;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    
    return EXIT_SUCCESS;
}
