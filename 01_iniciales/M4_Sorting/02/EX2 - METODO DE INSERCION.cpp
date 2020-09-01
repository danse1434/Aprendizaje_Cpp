/* METODO DE ORDENAMIENTO POR INSERCION */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {3,2,4,1,5};
	int i, pos, aux; // ITERADOR, POSICIONADOR, AUXILIAR
	
	for(i=0;i<5;i++){
		pos = i; // Posición en el arreglo
		aux = numeros[i]; // Resultado en el arreglo
		
		while((pos>0) && (numeros[pos-1]>aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	cout << "Orden Ascendente:: ";
	for(i=0;i<5;i++){
		cout << numeros[i] << " ";
	}	
		
	cout << "\nOrden Descendente: "; 
	for(i=4;i>=0;i--){
		cout << numeros[i] << "  ";
	}
	
	
	getch();
	return 0;
}
