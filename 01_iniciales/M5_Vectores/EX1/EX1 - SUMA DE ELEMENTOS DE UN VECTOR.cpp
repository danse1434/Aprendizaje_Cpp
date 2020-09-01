/* Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos. */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[] = {1,2,3,4,5};
	int suma = 0;
	
	for(int i=0; i<5; i++){
		
		suma += numero[i];		
	}
	
	cout << "\n La suma de elementos del vector es: " << suma << endl;
	cout << "\n\n";
	
	getch();
	return 0;
}
