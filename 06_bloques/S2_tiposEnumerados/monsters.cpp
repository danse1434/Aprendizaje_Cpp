#include <iostream>
#include <limits>

enum tipoMonstruo{
    MONSTRUO_ORCO,
    MONSTRUO_OGRO,
    MONSTRUO_DIABLO,
    MONSTRUO_DRAGON,
    MONSTRUO_UNICORNIO,
    MONSTRUO_MANTICORA,
    MONSTRUO_BLEMMYAE,
    MONSTRUO_CINOCEFALO,
    MONSTRUO_GIGANTE,
    MONSTRUO_MELUSINA,
    MONSTRUO_SIRENA,
};

std::string obtenerNombreMounstro(tipoMonstruo monstruo){
    switch (monstruo)
    {
    case MONSTRUO_ORCO:
        return "Orco";
        break;
    case MONSTRUO_OGRO:
        return "Ogro";
        break;    
    case MONSTRUO_DIABLO:
        return "Diablo";
        break;
    case MONSTRUO_DRAGON:
        return "Dragon";
        break;
    case MONSTRUO_UNICORNIO:
        return "Unicornio";
        break;
    case MONSTRUO_MANTICORA:
        return "Manticora";
        break;
    case MONSTRUO_BLEMMYAE:
        return "Blemmyae";
        break;
    case MONSTRUO_CINOCEFALO:
        return "Cinocefalo";
        break;
    case MONSTRUO_GIGANTE:
        return "Gigante";
        break;
    case MONSTRUO_MELUSINA:
        return "Melusina";
        break;
    case MONSTRUO_SIRENA:
        return "Sirena";
        break;
    default: return "Desconocido";
        break;
    }
}

int obtenerAtaqueMounstro(tipoMonstruo monstruo){
    switch (monstruo)
    {
    case MONSTRUO_ORCO:
        return 30;
        break;
    case MONSTRUO_OGRO:
        return 25;
        break;    
    case MONSTRUO_DIABLO:
        return 50;
        break;
    case MONSTRUO_DRAGON:
        return 50;
        break;
    case MONSTRUO_UNICORNIO:
        return 29;
        break;
    case MONSTRUO_MANTICORA:
        return 40;
        break;
    case MONSTRUO_BLEMMYAE:
        return 42;
        break;
    case MONSTRUO_CINOCEFALO:
        return 42;
        break;
    case MONSTRUO_GIGANTE:
        return 60;
        break;
    case MONSTRUO_MELUSINA:
        return 15;
        break;
    case MONSTRUO_SIRENA:
        return 10;
        break;
    default: return 0;
        break;
    }
}

int obtenerDefensaMounstro(tipoMonstruo monstruo){
    switch (monstruo)
    {
    case MONSTRUO_ORCO:
        return 20;
        break;
    case MONSTRUO_OGRO:
        return 32;
        break;    
    case MONSTRUO_DIABLO:
        return 60;
        break;
    case MONSTRUO_DRAGON:
        return 40;
        break;
    case MONSTRUO_UNICORNIO:
        return 60;
        break;
    case MONSTRUO_MANTICORA:
        return 60;
        break;
    case MONSTRUO_BLEMMYAE:
        return 10;
        break;
    case MONSTRUO_CINOCEFALO:
        return 42;
        break;
    case MONSTRUO_GIGANTE:
        return 60;
        break;
    case MONSTRUO_MELUSINA:
        return 30;
        break;
    case MONSTRUO_SIRENA:
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
