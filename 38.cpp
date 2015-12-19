// Intercambiar valores

#include <iostream>
using namespace std;

// Función Intercambio
void intercambio (int &a, int &b){
	int aux=a;
	a = b;
	b = aux;
}

// Función main
int main (){
	int a=0, b=0;

	cout << "\nA continuación introduciremos dos valores positivos enteros: " << endl;
	cout << "Introduzca valor 'a': ";
	cin >> a;
	cout << "Introduzca valor 'b': ";
	cin >> b;

	cout << "Ha introducido los siguientes datos: " << endl;
	cout << "a = " << a << "\nb = " << b << endl;
	intercambio (a,b);
	cout << "Despues del intercambio el resultado es: " << endl;
	cout << "a = " << a << "\nb = " << b << endl << endl;
}
