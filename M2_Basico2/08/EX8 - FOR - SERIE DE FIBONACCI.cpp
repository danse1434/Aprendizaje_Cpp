/* Serie de Fibonacci */

#include<iostream>
#include<conio.h>
#include<math.h>
 
 using namespace std;
 
 int main(){
	int n;
	long long x = 0, y = 1, z = 1;
	
	cout <<"Digite el numero de elementos: "; cin>>n;
	
	for(int i = 1; i <=n; i++){
		
		z = x + y;
		cout << z << " ";
		x = y;
		y = z;
	}
	
	cout << "\n";	
	getch();	
 	return 0;
 }
