// Calcular si un número es primo con funciones

#include <iostream>
using namespace std;

// Función calculo de modulo
void calculo_modulo (int &n, int &i, int &modulo){
	for (i=2; modulo != 0; i++){
		modulo = n % i;
		cout << "i = " << i << endl;
		cout << "mod = " << modulo << endl;
	}
}

// Función imprimir resultado
void imprime_modulo (int n){
	int modulo=1, i=0;
	calculo_modulo (n, i, modulo);
	if (n == i-1){
		cout << "Solo es divisible entre él mismo" << endl;
		cout << "Por lo tanto el número es primo." << endl;
	}
	else{
		cout << "El modulo de " << n << " partido " << i - 1 << " es: " << modulo << endl;
		cout << "Por lo tanto el número no es primo" << endl;
	}
}

// Función principal
int main (){
	int n=0;
	cout << "\nIntroduzca número positivo entero a calcular si es primo: ";
	cin >> n;
	imprime_modulo (n);
	cout << "Fin de programa." << endl << endl;
}
