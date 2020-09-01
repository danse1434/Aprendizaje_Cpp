/* Getter y Setters
// Funciones creadoras y modificadoras
 */

#include<iostream>
#include<stdlib.h>

using namespace std;

class point{
    private:
        int x, y;
    public:
        point();
        void setpointx(int);
        void setpointy(int);
        int getpointx();
        int getpointy();
};

point::point(){
}
/* Setters - Métodos modificadores  */
void point::setpointx(int _x){
    x = _x;
}
void point::setpointy(int _y){
    y = _y;
}
/* Getters - Métodos creadores  */
int point::getpointx(){
    return x;
}
int point::getpointy(){
    return y;
}

int main(){
    point punto1;                   // Ya no es necesario definir los atributos del objeto durante su definición xD

    punto1.setpointx(15);
    punto1.setpointy(19);

    cout << punto1.getpointx() << " y " << punto1.getpointy() << endl;

    system("pause");
    return 0;
}