#include<iostream>
using namespace std;

int main(){
	float x, y, aux ;
	
	cout <<"Digite el valor de x: "; cin >> x;
	cout <<"Digite el valor de y: "; cin >> y;
		
	aux = y;
	y = x;
	x = aux;
	
	cout <<"\nEl nuevo valor de x es: " <<x<<endl; 
	cout <<"El nuevo valor de y es: " <<y<<endl; 
	
	return 0;
}

