/* La sentencia DO WHILE */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i, j;
	i = 1;
	j = 100;
	
	do {
		cout << i << " " << j << endl;
		i++;
		j--;
		
	} while(i <= 100 && j >= 1);
	
	getch();
	return 0; 
}

