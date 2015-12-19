// Calcular el factorial de un número usando funciones

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

// Función principal
int main (){
	
	// Declaración de variables
	int dato=0, resultado=0;

	// E/S
	do {
		cout << "Introduzca el número del cual quiere calcular el factorial: ";
		cin >> dato;
			if (dato < 0)
				cout << "ERROR: número introducído no valido." << endl;
	} while (dato < 0);
	resultado = factorial(dato);
	cout << "El factorial de " << dato << " es: " << resultado << endl;

	cout << "Fin del programa." << endl;
}
