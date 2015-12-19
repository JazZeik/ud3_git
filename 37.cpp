// Calcular el factorial y combinatorio de un número usando funciones

#include <iostream>
using namespace std;

// Función factorial
int factorial (int n){
	// Declaración de variables
	int i=0;
	int factorial=1;
	// Bucle de calculo
	for (i=2;(i <= n);i++)
		factorial = factorial * i;
	// Devolución de resultados
	return factorial;
}

// Función combinatorio
int combinatorio (int a, int b){
	return factorial(a)/(factorial(b)*factorial(a-b));
}

// Función principal
int main (){
	// Declaración de variables
	int dato=0, resul_factorial=0, resul_combinatorio=0;
	// E/S
	do {
		cout << "Introduzca un número: ";
		cin >> dato;
			if (dato < 0)
				cout << "ERROR: número introducído no valido." << endl;
	} while (dato < 0);
	resul_factorial = factorial(dato);
	resul_combinatorio = combinatorio(dato,2);
	cout << "El factorial de ese número es: " << resul_factorial << endl;
	cout << "El combinatorio de " << dato << " sobre 2 es: " << resul_combinatorio << endl;

	cout << "Fin del programa." << endl;
}
