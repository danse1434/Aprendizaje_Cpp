/* Escriba un programa que lea la entrada estándar y muestre en su salida la cantidad con IVA */

#include<iostream>
using namespace std;

int main(){
	float n1, n2; // definiendo todas las variables
	
	cout <<"Digite el valor del producto neto: " ;
	cin  >> n1;
	
	n2 = n1*1.19 ; 
	
	cout <<"\nEl valor del producto incluyendo impuesto de valor agregado es : " << n2 <<endl;
	
	return 0;
}

