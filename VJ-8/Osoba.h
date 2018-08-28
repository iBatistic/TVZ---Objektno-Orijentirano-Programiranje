/*
 * Osoba.h
 *
 *  Created on: Aug 21, 2018
 *      Author: ivan
 */

#ifndef OSOBA_H_
#define OSOBA_H_

#include <iostream>
#include <vector>
#include "Polica.h"
using namespace std;

class Osoba {
private:
	string ime, prezime, oib;
	int dob;
	vector<Polica*> police;
public:
	Osoba(string ime, string prezime, string oib, int dob) :
			ime(ime), prezime(prezime), oib(oib), dob(dob) {
	}
	void dodajPolicu(Polica* p) {
		police.push_back(p);
	}
	vector<Polica*> getPolice() const {
		return police;
	}
	string getPunoIme() const {
		return ime + " " + prezime;
	}
	string getOib() const {
		return oib;
	}
	int getDob() const {
		return dob;
	}
};

#endif /* OSOBA_H_ */
