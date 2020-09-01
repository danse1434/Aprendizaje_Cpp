/* Escriba un programa que lea la entrada estándar y muestre en su salida la cantidad con IVA */

#include<iostream>

using namespace std;

int main(){
	float a, b, x = 0;
	
	cout << "Digite el valor de a: "; 
	cin >> a;
	
	cout << "Digite el valor de b: "; 
	cin >> b;
	
	x = (a/b) + 1;
	
	cout.precision(2);
	cout << "\nEl valor del resultado es: " << x <<endl;
		
	return 0;
	}




