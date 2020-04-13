/* FUNCIONES 
// Plantillas
*/

#include<iostream>
#include<conio.h>

// Prototipo de Función
void pedir();
void mult(float x, float y);

// Variables globales
float n1, n2;

using namespace std;

int main(){
	pedir();
	cout << "\n\n" << endl;
	mult(n1, n2);	
	getch();
	return 0;
}

// Definición de Función

void pedir(){
	cout << "\nDigite el primer valor: "; 	cin >> n1;
	cout << "\nDigite el segundo valor: ";	cin >> n2;
}

void mult(float x, float y){
	float z = x * y;
	cout << "La multiplicacion es " << z << endl;
}
