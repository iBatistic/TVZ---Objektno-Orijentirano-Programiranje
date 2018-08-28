//============================================================================
// Name        : Vj-6_Velika_hrvatska_firma.cpp
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
	int ispis(k);

	while(k--){
		string prezime,funkcija;
		double placa;
		cin >> prezime >> funkcija >> placa;

		A.dodajZaposlenika(prezime, funkcija, placa);
	}

	A.sortZaposlenika();

	A.ispisZaposlenika(ispis);

	string Prezime;

	cout << "Broj pretraga:" << flush;
	int p;
	cin >> p;

	while(p--){
		cout << "Unesite prezime: " << endl;
		cin >> Prezime;
		Zaposlenik* pZaposlenik = A.bSearch(Prezime);
		cout << *pZaposlenik << endl;
	}

	return 0;
}
