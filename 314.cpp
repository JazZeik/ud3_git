// Calculadora de mcd y mcm

#include <iostream>
using namespace std;

//Función pedir un número_____________________________________________________________________________
int pedir_entero (int a){
	do{
		cout << "Introduzca un número entero positivo: ";
		cin >> a;
		if (a < 0)
			cout << "El número introducido no es valido." << endl;
	}while (a < 0);
	return a;
}

//Función mcd__________________________________________________________________________________________
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

//Función mcm__________________________________________________________________________________________
int calculo_mcm (int a, int b, int mcd){
	return (a * b) / mcd;
}

//Función principal____________________________________________________________________________________
int main (){
	int num1=0, num2=0, mcd=0, mcm=0;
	cout << "\nA continuación calcularemos cual es el MCD y MCM de dos números." << endl;
	num1 = pedir_entero (num1);
	num2 = pedir_entero (num2);
	mcd = calculo_mcd (num1, num2);
	mcm = calculo_mcm (num1, num2, mcd);
	cout << "El mcd entre " << num1 << " y " << num2 << " es: " << mcd << endl;
	cout << "Y el mcm entre " << num1 << " y " << num2 << " es: " << mcm << endl;
	cout << "Fin del programa." << endl << endl;
}
