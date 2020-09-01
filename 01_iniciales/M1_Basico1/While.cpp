/* La sentencia WHILE 
	primero pienso luego existo
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i, j;
	i = 1;
	j = 100;
	while(i <= 100 && j >= 1) {
		cout << i << " " << j << endl;
		i++;
		j--;
}
	getch();
	return 0; 
}


