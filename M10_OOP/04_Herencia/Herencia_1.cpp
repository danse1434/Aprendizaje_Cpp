/* 
// HERENCIA DE OBJETOS

Si se cambian los atributos de la clase "madre" en OOBs heredados a "protected" se pueden cambiar 
por las "hijas", pero esto contreaviene el principio de encapsulación.


Arreglar el problema con los destructores
 */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Person{
    private:
        string  name;
        int     age;
    public:
        // Constructor
        Person(string _n, int _a){name = _n, age = _a;};
        // Destructor
        ~Person(){};
        // Métodos
        void show_Person(){
            cout << "Nombre: "  << name << endl;
            cout << "Edad: "    << age  << endl;
        };
        
};

class Alumn:public Person{
    private:
        string  alumn_code;
        float   score;
    public:
        // Constructor
        Alumn(string _n, int _a, string _c, float _s):Person(_n, _a){
            alumn_code=_c, score=_s;
        }
        // Destructor
        ~Alumn(){}
        // Métodos
        void show_Alumn(){
            show_Person();
            cout << "Codigo de alumno: " << alumn_code  << endl;
            cout << "Puntaje: "          << score       << endl;
        }
};

class Employee:public Person{
    private:
        string  employee_code;
        float   score;
        int     performance;
    public:
        // Constructor
        Employee(string _n, int _a, string _c, float _s, int _p):Person(_n, _a){
            employee_code=_c, score=_s, performance=_p;
        }
        // Destructor
        ~Employee(){}
        // Métodos
        void show_Employee(){
            show_Person();
            cout << "Codigo de empleado: " << employee_code <<  endl;
            cout << "Puntaje: "            << score         <<  endl;
            cout << "Rendimiento: "        << performance   <<  endl;
        }
};

class Universitary:public Alumn{
    private:
        string universitary_code;
        float  universitary_score;
    public:
        // Constructor
        Universitary(string _n, int _a, string _c, float _s, string _uc, float _us):Alumn(_n, _a, _c, _s){
            universitary_code = _uc; universitary_score = _us;
        }
        // Destructor
        ~Universitary(){}
        // Métodos
        void show_Universitary(){
            show_Alumn();
            cout << "Codigo de universitario: " << universitary_code  << endl;
            cout << "Puntaje: "                 << universitary_score << endl;
        }
};

int main(){
    // Mostrar atributos del objeto p1 (persona)
    cout << "Atributos de Persona" << endl;
    Person p1("Daniel", 27);
    p1.show_Person();
    cout << "\n\n\n";

    // Mostrar atributos del objeto p2 (alumno)
    cout << "Atributos de Alumno" << endl;
    Alumn p2("Laura", 25, "101341212", 5.0);
    p2.show_Alumn();
    cout << "\n\n\n";

    // Mostrar atributos del objeto p3 (empleado)
    cout << "Atributos de Empleado" << endl;
    Employee p3("Mavel", 31, "101201212", 5.0, 100);
    p3.show_Employee();
    cout << "\n\n\n";

    // Mostrar atributos del objeto p4 (universitario)
    cout << "Atributos de Universitario" << endl;
    Universitary p4("Nicolas", 24, "122120121", 5.0, "13011-12", 5.0);
    p4.show_Universitary();
    cout << "\n\n\n";

    system("pause");
    return 0;
}