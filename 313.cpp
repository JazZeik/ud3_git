// Calculadora de ecuaciones de segundo grado

#include <iostream>
#include <cmath>
using namespace std;

//Función pedir un número
double pedir_valor (double a){
		cout << "Introduzca un número entero positivo: ";
		cin >> a;
	return a;
}

//Funcion calculo de ecuación
bool ecuacion_2do_grado (double a, double b, double c, double &x1, double &x2){
	bool resultado;
	double discriminante=0.0;
	if (a == 0)
		if (b == 0)
			resultado = false;
		else {
			x1 = -c/b;
			x2 = x1;
			resultado = true;
		}
	else {
		discriminante = (b*b)-(4*a*c);
		if (discriminante > 0) {
			x1 = (-b+sqrt(discriminante))/(2*a);
			x2 = (-b-sqrt(discriminante))/(2*a);
			resultado = true;
		}
		else {
			if (discriminante < 0)
				resultado = false;
			else {
				x1 = -b/(2*a);
				x2 = x1;
				resultado = true;
			}
		}
	}
	return resultado;
}

//Funcion imprimir resultados
void imprime_resultados (double a, double b, double c, double x1, double x2){
	cout << "La ecuación: " << a << "x2 " << b << "x " << c << endl;
	if (x1==x2)
		cout << "Tiene única solución: " << x1 << endl;
	else 
		cout << "Tiene dos soluciones: " << x1 << " y " << x2 << endl;
}
//Función principal
int main (){
	double a=0.0, b=0.0, c=0.0, s1=0.0, s2=0.0;
	cout << "\nA continuación introduciremos una ecuación de segundo grado a calcular:" << endl;
	a = pedir_valor (a);
	b = pedir_valor (b);
	c = pedir_valor (c);
	if (ecuacion_2do_grado (a,b,c,s1,s2))
		imprime_resultados (a,b,c,s1,s2);
	else 
		cout << "Esta ecuación no tiene soluciones." << endl;
	
	cout << "Fin del programa." << endl << endl;
}
