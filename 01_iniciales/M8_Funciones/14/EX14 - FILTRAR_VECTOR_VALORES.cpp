/*Ejercicio 14: Realiza una función que tome como parámetros un vector de enteros y su
tamaño e imprima un vector con los elementos impares del vector recibido.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void impares(int vec[],int);

int N,vec[100];

int main(){
	pedirDatos();
	impares(vec,N);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamano del vector: ";
	cin>>N;
	
	for(int i=0;i<N;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

void impares(int vec[],int N){
	int vecImpares[100];
	int j=0;
	for(int i=0;i<N;i++){
		if(vec[i]%2!=0){
			vecImpares[j] = vec[i];
			j++;
		}
	}
	
	cout<<"\nImprimiendo los elementos impares del vector: "<<endl;
	for(int i=0;i<j;i++){
		cout<<vecImpares[i]<<" ";
	}
}
