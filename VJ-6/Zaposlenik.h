/*
 * Zaposlenik.h
 *
 *  Created on: Aug 20, 2018
 *      Author: ivan
 */

#ifndef ZAPOSLENIK_H_
#define ZAPOSLENIK_H_

#include <iostream>
using namespace std;

class Zaposlenik {
private:
	string prezime;
	string funkcija;
	double placa;
public:
	Zaposlenik();

	Zaposlenik(string prezime) :
			prezime(prezime) {};

	bool operator==(const string& prezime) const;

	bool operator<(const Zaposlenik &other) const;

	bool operator>(const Zaposlenik &other) const;

	Zaposlenik& operator+=(const double value);

	friend ostream& operator<<(ostream& os, const Zaposlenik& z);

	void setFunkcija(string funkcija) {
		this->funkcija = funkcija;
	}

	void setPlaca(double placa) {
		this->placa = placa;
	}

};

#endif /* ZAPOSLENIK_H_ */
