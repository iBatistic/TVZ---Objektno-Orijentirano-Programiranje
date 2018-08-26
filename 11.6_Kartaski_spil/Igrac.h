/*
 * Igrac.h
 *
 *  Created on: Aug 25, 2018
 *      Author: ivan
 */

#ifndef IGRAC_H_
#define IGRAC_H_
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Igrac {
private:
	string ime;
	vector<int> karte;
public:
	Igrac(string ime) : ime(ime)
	{
		karte.reserve(4);
	};

	void dodajKarte(vector<int> K){
		karte = K;
	};

	void ispisKarata() const
	{
		cout << setw(35) << left << getIme() +  " je dobio sljedece karte: " << flush;
		for(unsigned int i =0; i<karte.size(); i++)
		{
			cout << setw(6) << left << karte[i];
		}
	};

	string getIme() const {return ime;}

	virtual ~Igrac(){};
};

#endif /* IGRAC_H_ */
