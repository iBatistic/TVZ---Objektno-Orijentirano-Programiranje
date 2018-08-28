/*
 * Utakmica.h
 *
 *  Created on: Aug 18, 2018
 *      Author: ivan
 */

#ifndef UTAKMICA_H_
#define UTAKMICA_H_
#include <iostream>
using namespace std;

class Utakmica {
private:
	string ekipaDomaca;
	string ekipaGost;
	int brGolDomaca;
	int brGolGost;
public:
	Utakmica(string ekipaDomaca, string ekipaGost) :
			ekipaDomaca(ekipaDomaca), ekipaGost(ekipaGost) {
		brGolGost = 0;
		brGolDomaca = 0;
	}
	void dodajGol(const string ekipa) {
		if (ekipa == ekipaDomaca)
			brGolDomaca++;
		else
			brGolGost++;
	}
	int getBrGolDomaca() const {
		return brGolDomaca;
	}
	int getBrGolGost() const {
		return brGolGost;
	}
	string getDomacin() const {
		return ekipaDomaca;
	}
	string getGost() const {
		return ekipaGost;
	}
};

#endif /* UTAKMICA_H_ */
