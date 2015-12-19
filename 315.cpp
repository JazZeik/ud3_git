// Calculadora de segundos, minutos, horas y días

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

//Función calculo segundos____________________________________________________________________________
void calculo_segundos (int &resto, int &segundos){
		segundos = resto;
}

//Función calculo minutos_____________________________________________________________________________
void calculo_minutos (int &resto, int &minutos){
	if (resto < 60)
		minutos = 0;
	else 
		minutos = resto/60;
		resto = resto%60;
}

//Función calculo horas_______________________________________________________________________________
void calculo_horas (int &resto, int &horas){
	if (resto < 3600)
		horas = 0;
	else 
		horas = resto/3600;
		resto = resto%3600;
}

//Función calculo dias________________________________________________________________________________
void calculo_dias (int &segundos_dados, int &dias, int &resto){
	if (segundos_dados < 86400)
		dias = 0;
	else 
		dias = segundos_dados/86400;
		resto = segundos_dados%86400;
}

//Función principal____________________________________________________________________________________
int main (){
	int segundos_dados=0, segundos=0, minutos=0, horas=0, dias=0, resto=0;
	cout << "\nA continuación calcularemos el nº de días, horas, minutos y segundos de los segundos introducidos." << endl;
	segundos_dados = pedir_entero (segundos_dados);
	resto = segundos_dados;
	calculo_dias (segundos_dados, dias, resto);
	calculo_horas (resto, horas);
	calculo_minutos (resto, minutos);
	calculo_segundos (resto, segundos);
	cout << "Los segundos introducidos: " << segundos_dados << ", se traducen en:" << endl;
	cout << dias << " dias, " << horas << " horas, " << minutos << " minutos, y " << segundos << " segundos."  << endl;
	cout << "Fin del programa." << endl << endl;
}
