/*
 * relacion1-24.cpp
 *
 *  Created on: 07/11/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	int n, // el ultimo dato recibido
		i = 0, // numero de datos introducidos
		p = 0, // posicion de la primera aparicion de 12
		u = 0; // ultima aparicion de 12
	cout << "Para terminar introduzca 0." << endl;
	do {
		i == 0 ? cout << "Introduzca un numero entero: " : cout << "Y otro: " ;
		cin >> n;
		i ++;
		if (n == 12) {
			if (p == 0) { // es la primera aparicion
				p = i; // la primera actualiza p
				u = i; // y tambien es la ultima por ahora
			}
			else		// si no es la primera
				u = i; // actualizamos la posicion de la ultima
		}
	} while (n != 0);
	cout << "La primera ocurrencia de '12' es en la posicion " << p << endl;
	cout << "La ultima aparicion es en la posicion " << u << endl;
	return 0;
}




