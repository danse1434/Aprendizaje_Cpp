/* Uso de librería estándar */

#include<iostream>
#include<conio.h>
#include<stack>

using namespace std;

int main(){
    stack<int> pila;
    int dato;
    char rpt;
    // Adición de elementos a la pila
    do
    {
        cout << "Digite un numero: "; cin >> dato;
        pila.push(dato);
        cout	<<	"\n";
		cout	<<	"Desea agregar otro elemento a PILA (S/N): ";  cin >>   rpt;
    } while ((rpt=='S')||(rpt=='s')||(rpt=='Y')||(rpt=='y'));
    


    cout << "Numero de elementos en pila " << pila.size() << endl;

    // Obtención de elementos
	cout	<< "\n";
	cout	<< "Sacando todos los elementos de la pila: " << endl;
	// Sacar elementos de la pila
	while (!pila.empty()) // Mientras no se llegue al fondo de la pila
	{
        cout    <<  pila.top() << ", ";
        pila.pop();
	}
	getch();
	return 0;
}