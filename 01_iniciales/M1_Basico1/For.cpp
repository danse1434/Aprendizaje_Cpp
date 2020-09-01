/* La sentencia FOR */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	for(int i = 1, j = 100; i <= 100 && j >= 1; i++, j--){
		cout << i << " " << j << endl;
	}
	
	getch();
	return 0; 
}

