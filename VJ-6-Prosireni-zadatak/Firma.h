/*
 * Firma.h
 *
 *  Created on: Aug 20, 2018
 *      Author: ivan
 */

#ifndef FIRMA_H_
#define FIRMA_H_

#include <iostream>
#include <vector>
#include <iterator>
#include "Zaposlenik.h"
using namespace std;

class Firma {
private:
	vector<Zaposlenik> zaposlenici;
public:
	Firma(void);

	void dodajZaposlenika(string prezime, string funkcija, double placa);

	Zaposlenik* nadjiZaposlenika(string prezime);

	void sortZaposlenika();

	void ispisZaposlenika(int n);

	Zaposlenik* bSearch(string& prezime);
};

#endif /* FIRMA_H_ */
