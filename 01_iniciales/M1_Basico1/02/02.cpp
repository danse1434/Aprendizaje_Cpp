// Lectura o Entrada de Datas

#include<iostream>

using namespace std;

int main(){
	float  numero; //definiendo la variable
	
	cout <<"Digite un numero: " ;
	cin  >> numero;
	
	cout <<"\nEL numero que digito es: " <<numero;
	cin.ignore();
	cin.get();
	
	return 0;
}
