/*
 * Artikl.h
 *
 *  Created on: Aug 26, 2018
 *      Author: ivan
 */

#ifndef ARTIKL_H_
#define ARTIKL_H_

#include <iostream>
using namespace std;

class Artikl {
	string ime;
	int kolicina;
	double knKg;
	double cijena;

public:

	Artikl(string ime, int kolicina, double knKg) :
		ime(ime), kolicina(kolicina), knKg(knKg)
	{
		cijena = kolicina * knKg;
	};

	double getCijena() const {return cijena;}

	string getIme() const {return ime;}

	int getKolicina() const {return kolicina;}

	double getKnKg() const {return knKg;}

};

#endif /* ARTIKL_H_ */
