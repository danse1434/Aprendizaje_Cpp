/* Realice una funcion recursiva que sume los primeros n enteros positivos. Para plantear la función 
recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recurrencia: */

#include<iostream>
#include<conio.h>
using namespace std;

int sum(int);

int main(){
	int elem;
	
	do{
	cout << "Digite el numero de elementos: "; cin>>elem;
	}while(elem<=0);

	cout<< "La suma de los n elementos es: "<<sum(elem)<<endl;
	
	getch();
	return 0;
}

//Función recursiva
int sum(int n){
	int suma = 0;
	
	if(n==1){
		suma = 1;
	} else{
		suma = n + sum(n-1);
	}
	return(suma);
}
