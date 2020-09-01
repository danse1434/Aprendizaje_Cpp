/*Clases en C++ */

#include<iostream>
#include<stdlib.h>

using namespace std;

/* Definición del objeto */
class Persona{
    private: //Atributos
    string Nombre_1, Nombre_2;
    string Apellido_1, Apellido_2;
    int Edad;
    string DNI;

    public: // Métodos
    Persona(string, string, string, string, int, string);
    void leer();
    void escribir();
};

/* Constructor de objetos - sirve para inicializar los atributos de la clase  */
Persona::Persona(string _Nombre_1, string _Nombre_2, string _Apellido_1, string _Apellido_2, int _Edad, string _DNI){
    Nombre_1    =  _Nombre_1;
    Nombre_2    =  _Nombre_2;
    Apellido_1  =  _Apellido_1;
    Apellido_2  =  _Apellido_2;
    Edad        = _Edad;
    DNI         = _DNI;
}  
/* Métodos de la clase */
void Persona::leer(){
    cout << "Soy " << Nombre_1 << " " << Nombre_2 << " " << Apellido_1 << " " << Apellido_2 << ", tengo ";
    cout << Edad   << " anos, y estoy leyendo un libro" << endl;
}
void Persona::escribir(){
    cout << "Soy " << Nombre_1 << " " << Nombre_2 << " " << Apellido_1 << " " << Apellido_2 << ", tengo ";
    cout << Edad   << " anos, y estoy escribiendo un libro" << endl;
    cout << "ID: " <<   DNI << endl;
}





/* Definición de objeto Rectángulo */
class Rect{
    private:
    float H, W;
    public:
    Rect(float, float);
    void Mostrar();
    void Perimeter();
    void Area();
};

/* Constructor de objeto */
Rect::Rect(float _W, float _H){
    W = _W, H = _H;
}
void Rect::Mostrar(){
    cout << "Ingresada Ancho de: " << W << " y Altura de "  << H << endl; 
}
void Rect::Perimeter(){
    float P = 2 * (W + H);  cout << "Perimetro de " << P << endl;
}
void Rect::Area(){
    float A = W * H;        cout << "Area de " << A << endl;
}


int main(){
    Persona p1 = Persona("Daniel", "Sebastian", "Parra", "Gonzalez", 27, "1.049,629.987");
    p1.escribir();
    cout << endl;
    p1.leer();

    cout << "\n\n\n" << endl;

    Rect R1 = Rect(3.44, 12.12);
    R1.Mostrar();   cout << endl;
    R1.Area();      cout << endl;
    R1.Perimeter(); cout << endl;

    system("pause");
    return 0;

}
