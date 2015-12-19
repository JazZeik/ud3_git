#include <iostream>
using namespace std;

// Funciones calculo minimo y maximo
int calculo_minimo (int a, int min){
	if (a < min)
		min = a;
	return min;
}
int calculo_maximo (int a, int max){
	if (a > max)
		max = a;
	return max;
}
		
// Funcion principal
int main (){
	int a=0, maximo=0, minimo=0, i=0;
	cout << "\nIntroduzca un número: ";
	cin >> a;
	maximo = a;
	minimo = a;
	while (a != 0){
		i=i+1;
		minimo = calculo_minimo (a, minimo);
		maximo = calculo_maximo (a, maximo);
		cout << i << " números introducidos." << " Procesando..." << endl;
		cout << "Introduzca otro número: ";
		cin >> a;
	}
	cout << "El máximo introducido es: " << maximo << endl << "El mínimo introducido es: " << minimo << endl;
	cout << "Fin del programa." << endl << endl;
}
