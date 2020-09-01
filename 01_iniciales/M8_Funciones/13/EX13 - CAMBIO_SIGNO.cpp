// Función cambia signos del vector

#include<iostream>
#include<conio.h>
using namespace std;

void data_init();
void sign_reverse(int vec[],int);
void show_vec(int vec[],int);

int vec[100], N; // Variables en espacio global

int main(){
	data_init();
	
	sign_reverse(vec,N);
	show_vec(vec,N);
	
	getch();
	return 0;
}


void data_init(){ //Función para almacenar los elementos del vector
	cout << "Digite el numero de elementos (N) del vector: ";
	cin >> N;
	
	for(int i=0;i<N;i++){
		cout << i+1 << ". Digite un numero: ";
		cin >> vec[i];
	}
}

void sign_reverse(int vec[],int N){ // Función para cambiar los signos
 	for(int i=0;i<N;i++){
 		vec[i] = vec[i]*(-1);
	 }
 }
 
 void show_vec(int vec[],int N){ //Función para mostrar los elementos del vector
 		cout << "\nMostrando los elementos del vector con signo cambiado\n";		  
		  for(int i=0;i<N;i++){
 			cout << vec[i] << " ";
	 		}	
 }
