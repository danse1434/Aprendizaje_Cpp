/* FUNCIONES */
// Encontrar el mayor entre dos numeros

#include<iostream>
#include<conio.h>

// Prototipo de Función
int findMax(int x, int y);

using namespace std;

int main(){
	int n1, n2, x;
	cout << "Digite 2 numeros: ";
	cin >> n1 >> n2;
	
	x = findMax(n1, n2);
	
	cout << "El mayor numero es " << x << endl;
	
	getch();
	return 0;
}

// Definición de Función
int findMax(int x, int y){
	int numMax;	
	if(x > y){
		numMax = x;
	} else {
		numMax = y;
	}
	return numMax;
}
