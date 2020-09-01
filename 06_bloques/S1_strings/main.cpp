#include <iostream>
#include <limits>
#include <string>

int main(int argc, char const *argv[])
{
    
    std::string miNombre{ "Alex" };
    std::string miApellido{}, miNombreCompleto{};
    
    std::cout << "--------------------------------------------------------\n";
    std::cout << "Mi nombre es: " << miNombre << '\n';
    std::cout << "--------------------------------------------------------\n";

    std::cout << "\n\nSi el nombre de arriba - no es el suyo - ingrese su verdadero nombre (abajo):" << std::endl;
    std::getline(std::cin, miNombre);
    
    std::cout << "Su nombre verdadero es: " << miNombre << '\n';
    std::cout << "--------------------------------------------------------\n";
    std::cout << "\n\nIngrese su apellido abajo" << std::endl;
    std::getline(std::cin, miApellido);

    miNombreCompleto = miNombre + " " + miApellido;
    std::cout << "\n\n--------------------------------------------------------\n";
    std::cout << "Su nombre completo es: " << miNombreCompleto << std::endl;
    std::cout << "Su nombre completo tiene " << miNombreCompleto.length() << " letras, en total" << std::endl;





    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    /* Esto es lo mismo que std::cin.ignore(32767, '\n') es el máximo numero de valor con signo */
    std::cin.get();
    return EXIT_SUCCESS;
}