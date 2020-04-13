/* Condicionales con Switch - Hacer un programa que simule un cajero autom�tico con un saldo inicial 
de 1000 Dolares*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int saldo_inicial = 1000, opt;
	float extra, saldo = 0, retiro;
	
	cout<<"\tBienvenido a su Cajero Virtual"	<<endl;
	cout<<"\n1. Ingresar Dinero en Cuenta";
	cout<<"\n2. Retirar Dinero de la Cuenta";
	cout<<"\n3. Salir";
	cout<<"\nOpcion: ";
	cin >> opt;
	
	switch(opt){
		
		case 1:
		cout << "Digite la cantidad de Dinero a Ingresar: ";
		cin >> extra; 
		saldo = saldo_inicial + extra;
		cout << "Dinero en cuenta: "<<saldo; break;
		
		case 2: 
		cout << "Digite la cantidad de Dinero a Retirar: ";
		cin >> retiro;
		
		if(retiro > saldo_inicial){
			cout << "NO tiene esa cantidad de dinero";
		} else {
			saldo = saldo_inicial - retiro;
			cout << "Dinero en cuenta: "<<saldo; break;
		}
		case 3: 
		cout << "\nGRACIAS POR UTILIZAR NUESTROS SERVICIOS"; break;
		
	}
	
	getch();
	return 0;
}
