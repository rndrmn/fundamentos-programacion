/*
 * relacion1-21.cpp
 *
 *  Created on: 30/10/2012
 *      Author: Ramon Lopez Bautista
 */

#include <iostream>
using namespace std;

int main () {
	char car;
	cout << "Introduzca caracteres, termine con un punto." << endl;
	do {
		cin.get(car);
		if (car == 'a') { // es a
			cin.get(car);
			if (car == 'b') { // es ab
				cin.get(car);
				if (car == 'c') { // es abc
					cin.get (car);
					if (car == '.') { // es abc.
						cout << "Encontrado." << endl;
						return 0;
					}
				}
			}
		}
	} while (car != '.');

	cout << "No encontrado.";
	return -1;
}
