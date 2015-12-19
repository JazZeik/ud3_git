// Calcular la media de 3 numeros

#include <iostream>
using namespace std;

// Funcion calculo de la media
double media (double x1, double x2, double x3){

	return (x1+x2+x3)/3.0;
}

// Función principal
int main (){
	
	// Declaración de variables
	double x1=0.0, x2=0.0, x3=0.0, resultado=0.0;

	// E/S
	do {
		cout << "Introduzca el primer número: ";
		cin >> x1;
			if (x1 < 0)
				cout << "ERROR: número introducído no valido." << endl;
	} while (x1 < 0);
	do {
		cout << "Introduzca el segundo número: ";
		cin >> x2;
			if (x2 < 0)
				cout << "ERROR: número introducído no valido." << endl;
	} while (x2 < 0);
	do {
		cout << "Introduzca el último número: ";
		cin >> x3;
			if (x3 < 0)
				cout << "ERROR: número introducído no valido." << endl;
	} while (x3 < 0);
	resultado = media(x1, x2, x3);

	cout << "La media de los números " << x1 << ", " << x2 << " y " << x3 << " es: " << resultado << endl;

	cout << "Fin del programa." << endl;
}
