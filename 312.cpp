// Calculadora por funciones

#include <iostream>
using namespace std;

//Función pedir un número
int pedir_entero (int a){
	do{
		cout << "Introduzca un número entero positivo: ";
		cin >> a;
		if (a < 0)
			cout << "El número introducido no es valido." << endl;
	}while (a < 0);
	return a;
}

//Función mcd
int calculo_mcd (int a, int b){
	int resto=0;
	resto = a % b;
	while (resto != 0){
		a = b;
		b = resto;
		resto = a % b;
	}
	return b;
}

//Función principal
int main (){
	int num1=0, num2=0, resultado=0;
	cout << "\nA continuación calcularemos cual es el MCD de dos números." << endl;
	num1 = pedir_entero (num1);
	num2 = pedir_entero (num2);
	resultado = calculo_mcd (num1, num2);
	cout << "El mcd entre " << num1 << " y " << num2 << " es: " << resultado << endl;
	cout << "Fin del programa." << endl << endl;
}
