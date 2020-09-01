#include<iostream>
using namespace std;

int main(){
	float a, b, c, d, e, f, x = 0, y = 1, z = 0;
	
	cout <<"Digite el valor de a: "; cin >> a;
	cout <<"Digite el valor de b: "; cin >> b;
	cout <<"Digite el valor de c: "; cin >> c;
	cout <<"Digite el valor de d: "; cin >> d;
	cout <<"Digite el valor de e: "; cin >> e;
	cout <<"Digite el valor de f: "; cin >> f;
	
	x = a + (b/c);
	y = d + (e/f);
	z = x/y;
	
	cout.precision(2);
	cout <<"\nEl valor del resultado es: " <<z<<endl; 
	
	return 0;
}
