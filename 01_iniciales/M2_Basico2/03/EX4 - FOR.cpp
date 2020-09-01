/* Ciclos - Modelo 2 */

#include<iostream>
#include<conio.h>
 
using namespace std;
 
int main(){
	int n, suma=0;
	
	cout << "Digite el numero de elementos: ";
	cin >> n;
	
	for(int i = 1; i <= (2 * n-1); i++){
		suma += i + 2;
	}
	
	cout << "\nLa suma es: " << suma << endl;
	
	getch();	
 	return 0;
}
