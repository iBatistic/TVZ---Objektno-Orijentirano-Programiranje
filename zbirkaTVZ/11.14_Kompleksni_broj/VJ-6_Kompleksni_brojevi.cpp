//============================================================================
// Name        : VJ-6_Kompleksni_brojevi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Kompleksni broj, Ansi-style
//============================================================================

#include <iostream>
#include "Kompleksni.h"
using namespace std;

ostream& operator <<(ostream& izlaz, Kompleksni Z) {
	izlaz << Z.re << ((Z.im >= 0) ? "+" : "") << Z.im << "i";
	return izlaz;
}

int main() {

	Kompleksni Z1(1, 0), Z2(2, -1);

	// članska operatorska funkcija + (Kompleksni)
	Kompleksni Suma = Z1 + Z2;
	cout << Suma << endl; // 3 - 1i

	// članska operatorska funkcija * (Kompleksni)
	Kompleksni Umnozak = Z1 * Z2;
	cout << Umnozak << endl; // 2 - 1i

	// ne-članska operatorska funkcija - (Kompleksni, double)
	Kompleksni Razlika = Suma - 3;
	cout << Razlika << endl; // 0 - 1i

	// ne-članska operatorska funkcija - (double, Kompleksni)
	Kompleksni Razlika2 = 3 - Suma;
	cout << Razlika2 << endl; // 0 - 1i

	Kompleksni a(1,1);
	cout << a << endl;
	a++;
	cout << a << endl;
	++a;
	cout << a << endl;

	return 0;
};
