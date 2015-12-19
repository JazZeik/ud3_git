// Calculador nicomaco

#include <iostream>
using namespace std;

//Función pedir un número
int pedir_valor (int a){
		cout << "Introduzca un número entero positivo: ";
		cin >> a;
	return a;
}
//Función calculo nicomaco
int nicomaco (int x){
	int impar_actual=0, resultado=0;
	impar_actual = ((x - 1) * x + 1);
	resultado = impar_actual;
	cout << "La suma de: " << impar_actual;
	for(int i = 1; i < x; i++){
		impar_actual = impar_actual + 2;
		resultado = resultado + impar_actual;
		cout << " + " << impar_actual;
	}
	return resultado;
}

int main (){
	int valor=0, resultado=0;
	cout << "\nA continuación calcularemos el nicómaco de un número." << endl;
	valor = pedir_valor (valor);
	resultado = nicomaco (valor);
	cout << " = " << resultado << endl;
	cout << "Da como resultado nicómaco de: " << valor << " que es: " << resultado << endl;
	cout << "Fin del programa." << endl << endl;
}
