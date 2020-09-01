#include <iostream>
#include <limits>

enum class tipoMonstruo{
    ORCO,
    OGRO,
    DIABLO,
    DRAGON,
    UNICORNIO,
    MANTICORA,
    BLEMMYAE,
    CINOCEFALO,
    GIGANTE,
    MELUSINA,
    SIRENA,
};

std::string obtenerNombreMounstro(tipoMonstruo monstruo){
    switch (monstruo)
    {
    case tipoMonstruo::ORCO:
        return "Orco";
        break;
    case tipoMonstruo::OGRO:
        return "Ogro";
        break;    
    case tipoMonstruo::DIABLO:
        return "Diablo";
        break;
    case tipoMonstruo::DRAGON:
        return "Dragon";
        break;
    case tipoMonstruo::UNICORNIO:
        return "Unicornio";
        break;
    case tipoMonstruo::MANTICORA:
        return "Manticora";
        break;
    case tipoMonstruo::BLEMMYAE:
        return "Blemmyae";
        break;
    case tipoMonstruo::CINOCEFALO:
        return "Cinocefalo";
        break;
    case tipoMonstruo::GIGANTE:
        return "Gigante";
        break;
    case tipoMonstruo::MELUSINA:
        return "Melusina";
        break;
    case tipoMonstruo::SIRENA:
        return "Sirena";
        break;
    default: return "Desconocido";
        break;
    }
}

int obtenerAtaqueMounstro(tipoMonstruo monstruo){
    switch (monstruo)
    {
    case tipoMonstruo::ORCO:
        return 30;
        break;
    case tipoMonstruo::OGRO:
        return 25;
        break;    
    case tipoMonstruo::DIABLO:
        return 50;
        break;
    case tipoMonstruo::DRAGON:
        return 50;
        break;
    case tipoMonstruo::UNICORNIO:
        return 29;
        break;
    case tipoMonstruo::MANTICORA:
        return 40;
        break;
    case tipoMonstruo::BLEMMYAE:
        return 42;
        break;
    case tipoMonstruo::CINOCEFALO:
        return 42;
        break;
    case tipoMonstruo::GIGANTE:
        return 60;
        break;
    case tipoMonstruo::MELUSINA:
        return 15;
        break;
    case tipoMonstruo::SIRENA:
        return 10;
        break;
    default: return 0;
        break;
    }
}

int obtenerDefensaMounstro(tipoMonstruo monstruo){
    switch (monstruo)
    {
    case tipoMonstruo::ORCO:
        return 20;
        break;
    case tipoMonstruo::OGRO:
        return 32;
        break;    
    case tipoMonstruo::DIABLO:
        return 60;
        break;
    case tipoMonstruo::DRAGON:
        return 40;
        break;
    case tipoMonstruo::UNICORNIO:
        return 60;
        break;
    case tipoMonstruo::MANTICORA:
        return 60;
        break;
    case tipoMonstruo::BLEMMYAE:
        return 10;
        break;
    case tipoMonstruo::CINOCEFALO:
        return 42;
        break;
    case tipoMonstruo::GIGANTE:
        return 60;
        break;
    case tipoMonstruo::MELUSINA:
        return 30;
        break;
    case tipoMonstruo::SIRENA:
        return 29;
        break;
    default: return 0;
        break;
    }
}


int main(int argc, char const *argv[])
{
    int inputMonstruo{};
    std::cout << "---------------------------------------------------------------\n";
    std::cout << "Monstruos medievales con enumeradores" << std::endl;
    std::cout << "---------------------------------------------------------------\n";
     
    do
    {
    std::cout << "\nOtro monstruo: ";
    std::cout << "\nPor favor, ingrese un numero de 1 a 11 (para terminar digite 100): ";
    std::cin >> inputMonstruo;

    if (inputMonstruo==100)
    {
        return 0;
    }

    tipoMonstruo monstruo1{static_cast<tipoMonstruo>(inputMonstruo)};
    std::cout << "\n El monstruo ingresado es: \n";
    std::cout << "Nombre \t\t\t" << obtenerNombreMounstro(monstruo1) << std::endl;
    std::cout << "Ataque \t\t\t" << obtenerAtaqueMounstro(monstruo1) << std::endl;
    std::cout << "Defensa \t\t" << obtenerDefensaMounstro(monstruo1) << std::endl;
    } while (inputMonstruo < 100);
    
    
    
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}
