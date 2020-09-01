#include <iostream>
#include <limits>
#include <string>

struct sitioWeb
{
    std::string nombreSitioWeb{"Default"};
    int anunciosMostradas{0};
    double fraccionAccedidos{0.0};
    double gananciaAnuncios{0.0};
};

void ingresarDatosSitioWeb(sitioWeb & nuevoSitio);
void mostrarDatosSitioWeb(sitioWeb nuevoSitio);
void compararSitiosWeb(sitioWeb nuevoSitio1, sitioWeb nuevoSitio2);

int main(int argc, char const *argv[])
{
    std::cout << "---------------------------------------------------------------\n";
    std::cout << "\n Quiz 1 - Estructuras" << std::endl;
    std::cout << "---------------------------------------------------------------\n";

    sitioWeb pagina1;
    ingresarDatosSitioWeb(pagina1);
    
    sitioWeb pagina2;
    ingresarDatosSitioWeb(pagina2);

    std::cout << "\n---------------------------------------------------------------\n";
    mostrarDatosSitioWeb(pagina1);
    mostrarDatosSitioWeb(pagina2);
    
    std::cout << "\n---------------------------------------------------------------\n";
    compararSitiosWeb(pagina1, pagina2);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}



void ingresarDatosSitioWeb(sitioWeb & nuevoSitio){
    using namespace std;
    cout << "Nueva pagina" << endl;
    cout << "Ingrese el nombre de la pagina web: "; cin >> nuevoSitio.nombreSitioWeb; cout << endl;
    cout << "Ingrese la cantidad de anuncios mostrados con esta pagina por mes: "; cin >> nuevoSitio.anunciosMostradas; cout << endl;
    cout << "Ingrese la fraccion de anuncios accedidos con esta pagina por mes: "; cin >> nuevoSitio.fraccionAccedidos; cout << endl;
    cout << "Ingrese las ganancias generadas por anuncio : "; cin >> nuevoSitio.gananciaAnuncios; cout << endl;   
}

void mostrarDatosSitioWeb(sitioWeb nuevoSitio){
    using namespace std;
    cout << "\n---- Sitio Web ----" << endl;
    cout << "Nombre: " << nuevoSitio.nombreSitioWeb << endl;
    cout << "Cantidad Anuncios: " << nuevoSitio.anunciosMostradas << endl;
    cout << "Fraccion Acceso: " << nuevoSitio.fraccionAccedidos << endl;
    cout << "Ganancias por anuncio: " << nuevoSitio.gananciaAnuncios << endl;
    double gananciasTotales{0};
    gananciasTotales = nuevoSitio.anunciosMostradas*nuevoSitio.fraccionAccedidos*nuevoSitio.gananciaAnuncios;
    cout << "Ganancias totales: " << gananciasTotales << endl;
}

void compararSitiosWeb(sitioWeb nuevoSitio1, sitioWeb nuevoSitio2){
    using namespace std;
    double gananciasTotales1{0};
    gananciasTotales1 = nuevoSitio1.anunciosMostradas * nuevoSitio1.fraccionAccedidos * nuevoSitio1.gananciaAnuncios;
    double gananciasTotales2{0};
    gananciasTotales2 = nuevoSitio2.anunciosMostradas * nuevoSitio2.fraccionAccedidos * nuevoSitio2.gananciaAnuncios;
    if (gananciasTotales1 > gananciasTotales2)
    {
        cout<<"\nLas ganancias de: " << nuevoSitio1.nombreSitioWeb << " fueron mayores que las ganancias de " <<
        nuevoSitio2.nombreSitioWeb << endl;
    }
    else if (gananciasTotales1 < gananciasTotales2)
    {
        cout<<"\nLas ganancias de: " << nuevoSitio2.nombreSitioWeb << " fueron mayores que las ganancias de " <<
        nuevoSitio1.nombreSitioWeb << endl;
    }
    else
    {
        cout << "\nNo se puede determinar cual es el sitio web con mas ganancias" << endl;
    }

}