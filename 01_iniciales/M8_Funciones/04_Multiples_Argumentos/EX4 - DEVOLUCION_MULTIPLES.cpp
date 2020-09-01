/* FUNCIONES 
// Devolver valores múltiples, permite hacer una función que devuelva dos resultados con void
// Se definen las variables internas dentro de la línea de los argumentos.
*/

#include<iostream>
#include<conio.h>
using namespace std;

// Prototipo, no hay necesidad de decir cuales son los nombres de variables (sólo posición relativa)
void calc_sp(int, int, int&, int&);

int main(){
	int n1, n2, sum, prod;
	
	cout << "Digite 2 numeros: ";
	cin >> n1 >> n2;
	
	calc_sp(n1,n2,sum,prod);
	
	cout<<"El valor de la suma es: " << sum << endl;
	cout<<"El valor del producto es: " << prod << endl;
	
	getch();
	return 0;
}

// Definicion
void calc_sp(int n1,int n2,int& sum,int& prod){
	sum = n1+n2;
	prod = n1*n2;	
}
