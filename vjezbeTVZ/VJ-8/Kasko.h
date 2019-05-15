/*
 * Kasko.h
 *
 *  Created on: Aug 21, 2018
 *      Author: ivan
 */

#ifndef KASKO_H_
#define KASKO_H_

#include <iostream>
#include <vector>

#include "Polica.h"
using namespace std;

class Kasko : public Polica {
private:
	double rizik;
	double premija;

public:
	Kasko(string broj, string oib) : Polica(broj,oib) {rizik = 0; premija = 0;};
	void setData(int starost, int nabCijena, int dobKlijenta){

		if(dobKlijenta<=25){
			rizik = 0.8;
		}
		else if((dobKlijenta > 25) & (dobKlijenta < 70)){
			rizik = 0.8 - (dobKlijenta - 25)*0.01;
		}
		else{
			rizik = 0.8 + (dobKlijenta - 70)*0.01;
		}

		premija = (1/(double)starost) * (double)nabCijena * (rizik / 3.65);
	};

	double getPremija() const {return premija;};

	void ispis() const {
		cout << "OIB police: " << oib << ", broj police: " << broj
				<<", rizik: " << rizik
				<< ", iznos premije: " << premija << endl;
	};
};

#endif /* KASKO_H_ */
