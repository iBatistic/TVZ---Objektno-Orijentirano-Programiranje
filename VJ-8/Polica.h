/*
 * Polica.h
 *
 *  Created on: Aug 21, 2018
 *      Author: ivan
 */

#ifndef POLICA_H_
#define POLICA_H_

#include <iostream>
#include <vector>

using namespace std;

class Polica {
protected:
	string oib;
	string broj;
public:
	Polica(string broj, string oib): oib(oib), broj(broj) {};
	virtual ~Polica(){};
	string getBroj() const {return broj;};
	virtual double getPremija() const = 0;
	virtual void ispis() const = 0;

};

#endif /* POLICA_H_ */
