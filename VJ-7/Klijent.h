/*
 * Klijent.h
 *
 *  Created on: Aug 17, 2018
 *      Author: ivan
 */

#ifndef KLIJENT_H_
#define KLIJENT_H_

#include "Osoba.h"

class Klijent: public Osoba {
private:
	double saldo;
public:
	double Saldo() {return saldo;};

	void provediTransakciju(char tipTransakcije, double kolicina){
		if (tipTransakcije == 'U') saldo = saldo + kolicina;
		if (tipTransakcije == 'I') saldo = saldo - kolicina;
	};

	Klijent(
			string ime,
			string prezime,
			string oib,
			double saldo):
		Osoba(ime,prezime,oib)
	{
		this->saldo = saldo;
	};
	virtual ~Klijent(){};

	friend ostream& operator <<(ostream &s,Klijent &b){
			s << "Klijent: " << b.ime << " "
					<< b.prezime << " " << b.oib << endl;
			return s;
	}
};

#endif /* KLIJENT_H_ */
