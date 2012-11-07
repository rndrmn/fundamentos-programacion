/*
 * relacion1-22.cpp
 *
 *  Created on: 03/11/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	int n; // se calculara el n-esimo numero de Fibonacci
	unsigned long f0 = 0; // f(0)
	unsigned long f1 = 1; // f(1)
	unsigned long f; // f(n)


	cout << "Calculador de Fibonacci de un numero" << endl << endl;
	do {
		cout << "Introducir un entero no negativo: ";
		cin >> n;
	} while (n < 0);
	if (n == 0) // caso base
		f = f0;
	else if (n == 1) // caso base
		f = f1;
	else
		for (int i = 1; i < n; i++) {
			f = f0 + f1; // f(n) = f(n-2) + f(n-1)
			f0 = f1; // proximo f(n-2)
			f1 = f; // proximo f(n-1)
		}
	cout << endl << "El Fibonacci de " << n << " es " << f << endl;
	return 0;
}




