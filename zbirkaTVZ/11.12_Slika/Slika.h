/*
 * Slika.h
 *
 *  Created on: May 30, 2018
 *      Author: ivan
 */

#ifndef SLIKA_H_
#define SLIKA_H_

class Slika {
private:
	double price;

public:
	static int nb;

	static double priceTotal;

	static double ProsjecnaCijena();

	Slika();

	Slika(double P);
};

#endif /* SLIKA_H_ */
