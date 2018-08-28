//============================================================================
// Name        : VJ-6_Priprema.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Firma.h"
using namespace std;


int main() {

	int k;
	cin >> k;
	Firma A;

	while(k--){
	string prezime,funkcija;
	double placa;
	cin >> prezime >> funkcija >> placa;

	A.dodajZaposlenika(prezime, funkcija, placa);
	}

	int q;
	cin >> q;

	while(q--){
	string prezime;
	double povecanjePlace;
	cin >> prezime >> povecanjePlace;
	Zaposlenik *p = A.nadjiZaposlenika(prezime);
	*p += povecanjePlace;
	}

	A.sortZaposlenika();
	int n;
	cin >> n;
	A.ispisZaposlenika(n);

	return 0;
}
