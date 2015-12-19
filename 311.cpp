// Calculadora por funciones

#include <iostream>
using namespace std;

//Funciones operaciones
void suma (int a, int b){
	cout << "El resultado de la suma es: " << a+b << endl;
}
void resta (int a, int b){
	cout << "El resultado de la resta es: " << a-b << endl;
}
void multiplicacion (int a, int b){
	cout << "El resultado de la multiplicación es: " << a*b << endl;
}
void division (int a, int b){
	cout << "El resultado de la división es: " << a/b << endl;
}

//Función pedir un número
double pedir_valor (double a){
	cout << "Introduzca un número: ";
	cin >> a;
	return a;
}

//Función pedir una letra
double pedir_letra (char a){
	cout << "Introduzca una 's', 'r', 'm' o 'd' para seleccionar su operación: ";
	cin >> a;
	return a;
}

//Función elección de caso
void resultado_eleccion (char letra, double a, double b){
	switch (letra){
		case 's':
			suma (a,b);
			break;
		case 'r':
			resta (a,b);
			break;
		case 'm':
			multiplicacion (a,b);
			break;
		case 'd':
			division (a,b);
			break;
	}
}

//Función principal
int main (){
	double num1=0.0, num2=0.0;
	char letra;
	cout << "\nA continuación realizaremos una operación entre dos números." << endl;
	num1 = pedir_valor (num1);
	num2 = pedir_valor (num2);
	letra = pedir_letra (letra);
	resultado_eleccion (letra, num1, num2);
	cout << "Fin del programa." << endl << endl;
}
