/*
 * Osiguranje.h
 *
 *  Created on: Aug 21, 2018
 *      Author: ivan
 */

#ifndef OSIGURANJE_H_
#define OSIGURANJE_H_

#include <iostream>
#include <vector>
#include "Osoba.h"

using namespace std;

class Osiguranje {
private:
	vector<Osoba*> klijenti;
public:
	Osiguranje(){};
	void dodajKlijenta(Osoba* o);
	Osoba* dohvatiKlijenta(string oib);
	Polica* dohvatiPolicu(string broj);
	Polica* dohvatiNajvrijednijuPolicu();
	double getTotalPremija() const;
};

#endif /* OSIGURANJE_H_ */
