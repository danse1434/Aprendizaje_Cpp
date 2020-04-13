/*  Modulo Funciones - 
Desarrollar una funciónn que determine si una matriz es simétrica.
	A = A^T
	A es matriz cuadrada
*/

#include<iostream>
#include<conio.h>
using namespace std;

void init_data(); //solicitar los datos
void ver_symm(int m[][100],int,int); //obligatorio poner ncol nax

int m[100][100], nrow, ncol;


int main(){
	
	init_data();
	
	cout<<"\n\n";
	ver_symm(m,nrow,ncol);
	
	getch();
	return 0;
}



// FUNCIONES
void init_data(){
	cout << "Digite el numero de filas: ";
	cin >> nrow;
	cout << "Digite el numero de columnas: ";
	cin >> ncol;
	
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j << "]: ";
			cin>>m[i][j];
		}
	}
	
}

void ver_symm(int m[][100],int nrow,int ncol){
	int cont = 0; //El contador se va a aumentar al mapear la matriz
	
	if(nrow == ncol){
		for(int i=0;i<nrow;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j] == m[j][i]){
					cont++;
				}
			}
		}		
	}
	
	if(cont == nrow*ncol){
		cout << "La matriz es simetrica.";
	} else {
		cout << "La matriz NO simetrica.";
	}
	
}

void show_matrix(int m[][3],int nrow,int ncol){
	cout<<"Mostrando matriz:\n";
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			cout << m[i][j]<<" ";
		}
		cout<<"\n";
	}
}


