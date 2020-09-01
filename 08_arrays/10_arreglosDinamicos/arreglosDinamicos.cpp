#include <iostream>
#include <limits>
#include <string>

int main(int argc, char const *argv[])
{
    std::cout << "Cuantos nombres quiere ingresar?: ";
    std::size_t length{};
    std::cin  >> length;

    std::string *array{ new std::string[length]{} };

    std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    // ingresar valores
    for (std::size_t index = 0; index < length; index++)
    {
        std::cout << "Ingrese el valor para el elemento " << index + 1 << ":  ";
        std::getline(std::cin, array[index]);
        std::cout << std::endl;
    }
    
    std::cout << "\n\n-------------------------------------------------------------" << std::endl;
    std::cout << "Los elementos del vector son: " << std::endl;
    for (size_t index2 = 0; index2 < length; index2++)
    {
        std::cout << "Nombre #" << index2 + 1 << ": " << array[index2] << std::endl;
    }
    
    delete[] array;


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}