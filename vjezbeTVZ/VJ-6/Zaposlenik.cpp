/*
 * Zaposlenik.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: ivan
 */

#include "Zaposlenik.h"
#include <iomanip>

bool Zaposlenik::operator ==(const string& prezime) const {
	return (this->prezime == prezime);
};


bool Zaposlenik::operator < (const Zaposlenik &other) const {
	const string abeceda = "abcdefghijklmnopqrstuvwxyz";
	const string ABECEDA = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
	int posPrezime(-1);	int otherPosPrezime(-1);
	int posFunkcija(-1);	int otherPosFunkcija(-1);

	for(unsigned int i = 0; i < abeceda.size() ;i++){
		if (abeceda[i] == prezime[0]) posPrezime = i;
		if (abeceda[i] == other.prezime[0])	otherPosPrezime = i;
		if (abeceda[i] == funkcija[0]) posFunkcija = i;
		if (abeceda[i] == other.funkcija[0])	otherPosFunkcija = i;
	}

	for(unsigned int i = 0; i < ABECEDA.size() ;i++){
		if (ABECEDA[i] == prezime[0]) posPrezime = i;
		if (ABECEDA[i] == other.prezime[0])	otherPosPrezime = i;
		if (ABECEDA[i] == funkcija[0]) posFunkcija = i;
		if (ABECEDA[i] == other.funkcija[0])	otherPosFunkcija = i;
	}

	if(placa != other.placa)
	{
		if(other.placa > placa){
			return true;
		}else{
			return false;
		}
	}

	if(funkcija[0] != other.funkcija[0])
	{
		if(otherPosFunkcija > posFunkcija){
			return true;
		}else{
			return false;
		}
	}

	if(prezime[0] != other.prezime[0])
	{
		if(otherPosPrezime < posPrezime){
			return true;
		}else{
			return false;
		}
	}

	return false;
};

bool Zaposlenik::operator > (const Zaposlenik &other) const {
	if(other < *this)
		return true;
	return false;
};

Zaposlenik & Zaposlenik::operator+=(const double value){
	placa += value;
	return *this;
};

ostream& operator<<(ostream& os, const Zaposlenik& z) {
	os << z.prezime << " " << z.funkcija <<  " " << z.placa << endl;
};


