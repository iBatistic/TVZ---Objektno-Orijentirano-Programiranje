/*
 * Osoba.h
 *
 *  Created on: Aug 17, 2018
 *      Author: ivan
 */

#ifndef OSOBA_H_
#define OSOBA_H_

#include <iostream>
using namespace std;

class Osoba {
protected:
	string ime,prezime,oib;
public:
	string getIme() const {return ime;};
	string getPrezime() const {return prezime;};
	string getOib() const {return oib;};
	Osoba(string oib, string ime, string prezime){
		this->ime = ime;
		this->prezime = prezime;
		this->oib = oib;
	};
	virtual ~Osoba(){};
};

#endif /* OSOBA_H_ */


