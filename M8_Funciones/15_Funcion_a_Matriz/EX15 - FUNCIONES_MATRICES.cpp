/*Funciones para matrices - elevar al cuadrado.*/

#include<iostream>
#include<conio.h>
using namespace std;

void show_matrix(int m[][3],	int,int); //obligatorio poner ncol nax
void square_matrix(int m[][3],	int,int); //obligatorio poner ncol nax

int main(){
	const int nrow = 2;	
	const int ncol = 3;
	int m[nrow][ncol] = {{1,2,3},{4,5,6}};
	
	show_matrix(m,nrow,ncol);
	cout<<"\n\n";
	square_matrix(m,nrow,ncol);
	show_matrix(m,nrow,ncol);
	cout<<"\n\n";	
	getch();
	return 0;
}



// Función muestra los elementos de la matriz
void show_matrix(int m[][3],int nrow,int ncol){
	cout<<"Mostrando matriz:\n";
	for (int i = 0; i < nrow; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			cout << m[i][j]<<" ";
		}	
		cout << "\n";
	}
}

// Función calcula el cuadrado de las matrices
void square_matrix(int m[][3],int nrow,int ncol){
	for (int i = 0; i < nrow; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			m[i][j] *= m[i][j];
		}	
	}
}
