/*
 * Firma.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: ivan
 */

#include "Firma.h"
#include <iterator>
#include <algorithm>


Firma::Firma() {};

void Firma::dodajZaposlenika(string prezime, string funkcija, double placa){
	Zaposlenik A(prezime);
	A.setFunkcija(funkcija);
	A.setPlaca(placa);
	zaposlenici.push_back(A);
};

Zaposlenik* Firma::nadjiZaposlenika(string prezime){
	vector<Zaposlenik>::iterator it;
	for(it = zaposlenici.begin(); it != zaposlenici.end(); it++){
		if (*it == prezime)
		{
			return &(*it);
		}
	}
	return NULL;
};

void Firma::ispisZaposlenika(int n){
	vector<Zaposlenik>::iterator  it;;
	for(it = zaposlenici.begin() ; it != (zaposlenici.end() - (zaposlenici.size()-n)) ; it++)
	{
		cout << *it << endl;
	}
}

void Firma::sortZaposlenika(){
	sort(zaposlenici.begin(), zaposlenici.end(), greater<Zaposlenik>());
};
