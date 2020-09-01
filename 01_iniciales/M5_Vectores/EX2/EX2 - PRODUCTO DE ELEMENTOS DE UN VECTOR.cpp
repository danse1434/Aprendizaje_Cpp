/* Escribe un programa que defina un vector de numeros y calcule el producto de sus elementos. */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[] = {1,2,3,4,5};
	int prod = 1;
	
	for(int i=0; i<5; i++){
		
		prod = prod * numero[i];		
	}
	
	cout << "\nEl producto de elementos del vector es: " << prod << endl;
	cout << "\n\n";
	
	getch();
	return 0;
}
