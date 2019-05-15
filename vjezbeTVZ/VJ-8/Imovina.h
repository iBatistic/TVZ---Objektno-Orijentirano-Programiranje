/*
 * Imovina.h
 *
 *  Created on: Aug 21, 2018
 *      Author: ivan
 */

#ifndef IMOVINA_H_
#define IMOVINA_H_

#include <iostream>
#include <vector>

#include "Polica.h"
using namespace std;

class Imovina : public Polica {
private:
	double k;
	double premija;
public:
	Imovina(string broj, string oib) : Polica(broj,oib) { k = 0; premija = 0;};
	void setData(int p, double r){

		if(p < 100000) k = 0.2;
		else if ((p >= 100000) & (p < 300000)) k = 0.3;
		else if ((p >= 300000) & (p < 800000)) k = 0.5;
		else if ((p >= 800000) & (p < 1500000)) k = 0.6;
		else k = 0.75;

		premija = (double)p * r * k/1000;
	};

	double getPremija() const {return premija;};

	void ispis() const {
		cout << "OIB police: " << oib << ", broj police: " << broj
				<<", koeficijent vrijednosti: " << k
				<< ", iznos premije: " << premija << endl;
	};

};

#endif /* IMOVINA_H_ */
