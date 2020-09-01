/* Modulo de Funciones - 
// Intercambiar el valor de dos variables
 */

#include<iostream>
#include<conio.h>
using namespace std;

// Prototipo
void revolver(int&, int&);

int main(){
	int num1 = 10, num2 = 15;
	cout << "El valor de num1 es: " << num1 << endl;
	cout << "El valor de num2 es: " << num2 << endl;
	
	revolver(num1,num2);
	
	cout<<"\nEl nuevo valor de num1 es: " << num1 <<endl;
	cout<<"\nEl nuevo valor de num2 es: " << num2 <<endl;
		
	getch();
	return 0;
}

// Definición
void revolver(int& num1, int& num2){
	int aux;
	aux = num1;
	num1 = num2;
	num2 = aux;
}
