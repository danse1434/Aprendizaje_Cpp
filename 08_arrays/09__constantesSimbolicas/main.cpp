#include <iostream>
#include <limits>



int main(int argc, char const *argv[])
{
    /* Arreglo fijo 
        El programa ubica memoria para un array fijo de longitud 5
        Inicializa memoria con el stringC "Daniel\0" 
        La memoria ha sido ubicada en específico para este array y puede ser modificada libremente.
        El array es tratado como una variable local, y al salir del scope se libera de la memoria
    */
    char miNombre1[]{ "Daniel" };
    std::cout << miNombre1 << std::endl;

    /* Puntero a constante simbólica 
        El compilador coloca "Laura\0" en un lugar de 'lectura' de la memoria, y entonces ubica un puntero 
        en su dirección.
        Se debe colocar como const char porque el lugar de inicialización es sólo lectura.
        Este modo puede colocarse en una función y no será destruido
    */
    const char *miNombre2[]{ "Laura" };
    std::cout << *miNombre2 << std::endl;

    /* La utilización de std::string o std::string_view no presenta problemas de scope a diferencia 
        de stringC */


    /* ----------------------------------------------------------------------------------------- */
    int nArray[5]{1,2,3,4,5};
    char cArray1[]{"cArray1"};
    const char *cArray2{"cArray2"};
    
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "Comportamiento de cout con stringC" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << nArray << std::endl;
    std::cout << "Un arreglo de enteros decae en un puntero con std::cout" << std::endl;
    std::cout << cArray1 << std::endl;
    std::cout << "Un arreglo de caracteres decae en un puntero con std::cout" << std::endl;
    std::cout << cArray2 << std::endl;
    std::cout << "Un arreglo de caracteres de tipo puntero ya lo es, toca pasar su referencia" << std::endl;
    std::cout << "\t\t\t" << std::endl;
    std::cout << "Cuando se pasa un puntero que no es caracteres a sdt::cout se muestra el valor del puntero. Si se pasa una de tipo caracter se interpreta la intencion y se muestran los caracteres" << std::endl;

    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "Resultados de cout extranos con stringC" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    
    char c{ 'Q' };
    std::cout << "Pasar un caracter que ha decaido a puntero por su referencia." << std::endl;
    std::cout << &c;


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}