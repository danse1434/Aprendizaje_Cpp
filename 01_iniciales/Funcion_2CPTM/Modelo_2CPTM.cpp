 #include<iostream>
 #include<conio.h>
 #include<math.h>
 
 using namespace std;
 
// Prototipo de Función 2CPTM
float F2CPTM_b(float t, float Do, float V, float k10, float k12, float k21);

// Colección de datos
void coleccion();

// Variables globales
float t, Do, V, k10, k12, k21;




///////////////////////////////////////////////////////////////////////////////////
// Función main
 int main(){
	 coleccion(); 	
 	
 	cout << "\t Parametros Farmacocineticos"   											<< endl;
 	cout << "\n La concentracion plasmatica es: " << F2CPTM_b(t, Do, V, k10, k12, k21) 	<< endl;
 	
 	//Ejecuci�n en Loop
	// 	for( int a = 10; a < 20; a = a + 1){
	// 		cout << "Valor de a: " << a << endl;
	//	 }
	// 	
	getch();
 	return 0;
 }

////////////////////////////////////////////////////////////////////////////////////////


// Colección
void coleccion(){
	cout << "\n Digite el tiempo para prediccion: "; 				cin >> t;
 	cout << "\n Digite la dosis: "; 								cin >> Do;
 	cout << "\n Digite el volumen de distribucion del modelo: "; 	cin >> V;
 	cout << "\n Digite la constante de velocidad k10: "; 			cin >> k10; 
 	cout << "\n Digite la constante de velocidad k12: "; 			cin >> k12;
 	cout << "\n Digite la constante de velocidad k21: "; 			cin >> k21;
}




// Modelo de Dos Compartimentos
float F2CPTM_b(float t, float Do, float V, float k10, float k12, float k21){
	float ksum = 0, kprod = 0;
 	float alpha = 0, beta = 0, A = 0, B = 0; 
 	float C = 0; 

	ksum = k10 + k21 + k12;
	kprod = k10 * k21;
	alpha = (ksum + sqrt(pow(ksum,2) - (4 * kprod))) / 2;
	beta =  (ksum - sqrt(pow(ksum,2) - (4 * kprod))) / 2;
    A = (1 / V) * (alpha - k21) / (alpha - beta);
    B = (1 / V) * (beta - k21) / (beta - alpha);
        
    C = Do * ((A * exp(-alpha*t)) + (B * exp(-beta*t)));
	
	return(C); // Resultado como Concentración plasmática
}



