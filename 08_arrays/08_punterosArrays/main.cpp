#include <iostream>
#include <limits>



int main(int argc, char const *argv[])
{
    int array[5] = {2,5,6,7,1};
    // Imprimir la dirección de memoria del primer elemento:
    std::cout << "Elemento 0 tiene la direccion:" << &array[0] << '\n';
    std::cout << "Elemento 1 tiene la direccion:" << &array[1] << '\n';
    // Imprimir el valor del puntero en el cual cae la dirrección de memoria
    std::cout << "La direccion de memoria del puntero es: " << array << '\n';

    // Dereferenciar el array retorna el elemento cero
    std::cout << *array; 
    int *ptr{array};
    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << &ptr << '\n';

    std::cout << "-------------------------------------------------------------\n";
    std::cout << "sizeof(array)" << sizeof(array) << '\n';
    std::cout << "sizeof(ptr)"   << sizeof(ptr)   << '\n';
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}