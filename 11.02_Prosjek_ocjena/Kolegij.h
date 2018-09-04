/*
 * Kolegij.h
 *
 *  Created on: Aug 26, 2018
 *      Author: ivan
 */

#ifndef KOLEGIJ_H_
#define KOLEGIJ_H

#include <iostream>
using namespace std;

class Kolegij {
private:
	string imeKolegija;
	int ocjena;

public:
	Kolegij(string imeKolegija, int ocjena) :
	imeKolegija(imeKolegija), ocjena(ocjena) {};

	string getImeKolegija() const {return imeKolegija;}

	int getOcjenaKolegija() const {return ocjena;}

};

#endif /* KOLEGIJ_H_ */
