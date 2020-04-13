/* Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0.
El programa debe entregar la suma de los valores mayores a 0 introducidos. */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int x, sum = 0;
	
	do{
		cout << "Digite un numero: "; cin >> x;
		
		if(x > 0){
			sum += x;
		}
		
	}while(((x < 20 ) || (x > 30)) && (x != 0));


	cout << "\nLa suma es: " << sum <<endl;
	
	system("pause");
	return 0; 
}

