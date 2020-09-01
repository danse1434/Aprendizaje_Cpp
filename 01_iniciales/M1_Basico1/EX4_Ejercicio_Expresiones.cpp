#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, x;
	
	cout<<"Ingrese el valor de la variable a: ";
	cin >> a;
	
	cout<<"Ingrese el valor de la variable b: ";
	cin >> b;
	
	cout<<"Ingrese el valor de la variable c: ";
	cin >> c;
	
	cout<<"Ingrese el valor de la variable d: ";
	cin >> d;
	
	x = (a+b)/(c+d);
	
	cout.precision(2);
	cout<<"\nEl valor del resultado es: "<< x <<endl;
	
	
}
