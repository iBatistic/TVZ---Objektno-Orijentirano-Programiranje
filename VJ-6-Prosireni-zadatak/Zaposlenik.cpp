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


bool Zaposlenik::operator < (const string &prezime) const {
	const string abeceda = "abcdefghijklmnopqrstuvwxyz";
	const string ABECEDA = "ABCDEFGHIJKLMNOPRSTUVWXYZ";

	int size;

	if(this->prezime.size() > prezime.size()){
		size=this->prezime.size();
	}else{
        size= prezime.size();
	}

	for(int I = 0; I < size; I++)
	{
		int posPrezime(-1);	int otherPosPrezime(-1);

		for(unsigned int i = 0; i < abeceda.size(); i++){
			if (abeceda[i] == this->prezime[I]) posPrezime = i;
			if (abeceda[i] == prezime[I])	otherPosPrezime = i;
		}

		for(unsigned int i = 0; i < ABECEDA.size(); i++){
			if (ABECEDA[i] == this->prezime[I]) posPrezime = i;
			if (ABECEDA[i] == prezime[I])	otherPosPrezime = i;
		}

		if(posPrezime != otherPosPrezime)
		{
			if(otherPosPrezime < posPrezime){
				return true;
			}else{
				return false;
			}
		}
	}
	return false;
};

bool Zaposlenik::operator > (const Zaposlenik &other) const {
	if(*this < other.prezime)
		return false;
	return true;
};

Zaposlenik & Zaposlenik::operator+=(const double value){
	placa += value;
	return *this;
};

ostream& operator<<(ostream& os, const Zaposlenik& z) {
	os << z.prezime << " " << z.funkcija <<  " " << z.placa << endl;
};


