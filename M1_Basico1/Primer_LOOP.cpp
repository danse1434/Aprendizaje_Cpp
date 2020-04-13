 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 int main(){
 	float t, Do, V, k10, k12, k21;
 	float ksum = 0, kprod = 0;
 	float alpha = 0, beta = 0, A = 0, B = 0; 
 	float C = 0; 
 	
 	cout << "Digite el tiempo para prediccion: "; cin >> t;
 	cout << "\nDigite la dosis: "; cin >> Do;
 	cout << "\nDigite el volumen de distribucion del modelo: "; cin >> V;
 	cout << "\nDigite la constante de velocidad k10: "; cin >> k10; 
 	cout << "\nDigite la constante de velocidad k12: "; cin >> k12;
 	cout << "\nDigite la constante de velocidad k21: "; cin >> k21;
 	
 	
	ksum = k10 + k21 + k12;
	kprod = k10 * k21;
	alpha = (ksum + sqrt(pow(ksum,2) - (4 * kprod))) / 2;
	beta = (ksum - sqrt(pow(ksum,2) - (4 * kprod))) / 2;
    A = (1 / V) * (alpha - k21) / (alpha - beta);
    B = (1 / V) * (beta - k21) / (beta - alpha);
        
    C = Do * ((A * exp(-alpha*t)) + (B * exp(-beta*t)));
 	
 	cout << "\tParametros Farmacocineticos" << endl;
 	cout << "\nLa concentracion plasmatica es: " << C << endl;
 		  	
 	//Ejecución en Loop
// 	for( int a = 10; a < 20; a = a + 1){
// 		cout << "Valor de a: " << a << endl;
//	 }
// 	
	cin.get();	
 	return 0;
 }
