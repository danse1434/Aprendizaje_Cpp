/* Recursividad - Cálculo de Factorial */

#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int);



int main(){
	int n, m;
	
	cout << 	"Digite un numero: "; cin>>n;
	cout << 	"\n\n";	
	
	m = factorial(n);
	cout << 	"El factorial del numero es: "<<m;
	
	getch();
	return 0;
}


int factorial(int n){
	if(n==0){
		n = 1;
	} else {
		n = n * factorial(n-1);
	}
	return n;
	}
