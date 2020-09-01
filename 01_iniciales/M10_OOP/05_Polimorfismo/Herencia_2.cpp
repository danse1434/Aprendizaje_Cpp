/* 
// POLIMORFISMO

Se le coloca "virtual" en las funciones heredadas de cada "madre" y estas funciones se pueden reutilizar

Arreglar el problema con los destructores; aquí se aplica el concepto en las funciones show() y getname()
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
        virtual void show(){
            cout << "Nombre: "  << name << endl;
            cout << "Edad: "    << age  << endl;
        };       
        virtual string getname(){return name;}
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
        virtual void show(){
            Person::show();
            cout << "Codigo de alumno: " << alumn_code  << endl;
            cout << "Puntaje: "          << score       << endl;
        };
        virtual string getname(){return Person::getname();}
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
        void show(){
            Person::show();
            cout << "Codigo de empleado: " << employee_code <<  endl;
            cout << "Puntaje: "            << score         <<  endl;
            cout << "Rendimiento: "        << performance   <<  endl;
        };
        string getname(){return Person::getname();}
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
        void show(){
            Alumn::show();
            cout << "Codigo de universitario: " << universitary_code  << endl;
            cout << "Puntaje: "                 << universitary_score << endl;
        };
        string getname(){return Alumn::getname();}
};

int main(){
    Person *vector[4];

    vector[0] = new Person("Daniel", 27);
    vector[1] = new Alumn("Laura", 25, "101341212", 5.0);
    vector[2] = new Employee("Mavel", 31, "101201212", 5.0, 100);
    vector[3] = new Universitary("Nicolas", 24, "122120121", 5.0, "13011-12", 5.0);
    vector[4] = new Employee("Noel", 64, "6761567", 5.0, 100);
    
    for (int i = 0; i <= 4; i++)
    {
    cout << "Atributos de " << vector[i] -> getname() << endl;
    vector[i] -> show();  // Este se usa en reemplazo de vector[i].show() ya que esto es inválido en C++
    cout << "\n\n\n";
    }
    
    system("pause");
    return 0;
}