/*
 * relacion1-23.cpp
 *
 *  Created on: 03/11/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	int n,  // ultimo numero introducido
	    s,  // la suma parcial
	    l;  // el primer numero limita cuantos se introduciran
	int mayor, menor;
	float media;

	cout << "Introduzca un numero N. A continuacion se le pedira que introduzca N - 1 numeros mas." << endl;
	cout << "1º numero: ";
	cin >> n;
	mayor = menor = media = l = s = n; // inicializar todas las variables al primer numero
	if (n > 1) {
		for (int i = 1; i < l; i++){
			cout << i + 1 << "º numero: ";
			cin >> n;
			if (n > mayor)
				mayor = n;
			if (n < menor)
				menor = n;
			s += n;
		}
		media = float(s) / l;
	}
	cout 	<< "El mayor de los numeros introducidos es " << mayor
			<< ", el menor es " << menor << " y la media aritmetica es " << media << endl;
	return 0;
}




