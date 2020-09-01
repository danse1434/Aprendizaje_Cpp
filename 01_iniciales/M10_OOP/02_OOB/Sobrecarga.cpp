/* Sobrecarga de constructores: 
// Se refiere a la presencia de más de un constructor en el objeto 
// Destructor de objetos
// Es un método que permite la eliminación de un objeto.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class date{
    private:
    int day, month, year;
    public:
    date(int, int, int);    // Constructor 1
    date(long);             // Constructor 2
    ~date();                // Destructor
    void show_date();
};

/* Constructor 1 */
date::date(int _d, int _m, int _y){
    day = _d, month = _m, year = _y;
}
/* Constructor 2 */
date::date(long _date){
    year  = int(_date/1E4);                     // Extraer el año
    month = int((_date - year*1E4)/1E2);        // Extraer el mes
    day   = int(_date - year*1E4 - month*1E2);  // Extraer el día
}
/* Destructor */
date::~date(){
}
/* Método */
void date::show_date(){
    cout << "The date was: " << day << "/" << month << "/" << year << endl;
}

int main(){
    date today = date(28,04,2020);
    date yeste = date(20200427);

    today.show_date();
    yeste.show_date();

    today.~date();  yeste.~date();
    
    system("pause");
    return 0;
}