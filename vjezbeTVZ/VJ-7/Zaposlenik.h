/*
 * Zaposlenik.h
 *
 *  Created on: Aug 17, 2018
 *      Author: ivan
 */

#ifndef ZAPOSLENIK_H_
#define ZAPOSLENIK_H_

#include "Osoba.h"
#include <ostream>

class Zaposlenik: public Osoba {
private:
	double koefPlace;
public:
	double koef() const {return koefPlace;};
	Zaposlenik(
			string ime,
			string prezime,
			string oib,
			double koefPlace ):
		Osoba(ime,prezime,oib)
	{
		this->koefPlace = koefPlace;
	};
	virtual ~Zaposlenik(){};

	friend ostream& operator <<(ostream &s,Zaposlenik &b){
			s << "Zaposlenik: " << b.ime << " "
					<< b.prezime << " " << b.oib << endl;
			return s;
	}
};

#endif /* ZAPOSLENIK_H_ */
