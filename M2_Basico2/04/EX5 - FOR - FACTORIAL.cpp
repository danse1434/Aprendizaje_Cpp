/* Ciclos - Escriba un programa que calcule el factorial de n */

#include<iostream>
#include<conio.h>
 
 using namespace std;
 
 int main(){
	int n, factorial = 1;
	
	cout << "Digite el numero: ";	cin >> n;
	
	for(int i = 1; i <= n; i++){
		factorial = factorial * i;
	}
	
	cout << "\nEl factorial es: " << factorial << endl;
	
	getch();	
 	return 0;
 }
