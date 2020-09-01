/* Condicionales - Ejercicio 1 */

#include<iostream>
#include<conio.h>
using namespace std;

int	main(){
	int numero, dato = 5;
	
	cout<< "Digite un numero: ";
	cin >> numero;
	
	if(numero == dato){
		cout << "\n El numero es 5";
	} else {
		cout << "\n El numero es diferente de 5";
	}
	
	getch();	
	return 0;
}
