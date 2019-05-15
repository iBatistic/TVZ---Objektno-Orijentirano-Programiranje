/*
 * Pravokutnik.h
 *
 *  Created on: May 30, 2018
 *      Author: ivan
 */

#ifndef PRAVOKUTNIK_H_
#define PRAVOKUTNIK_H_
#include "GeometrijskiLik.h"
using namespace std;



class Pravokutnik : public GeometrijskiLik{
private:
	double a,b;

public:
	double Opseg(){return 2*a+2*b;}

	double Povrsina(){return a*b;}

	Pravokutnik(double s, double ss, string naziv = "Pravokutnik"){a = s; b = ss; Naziv = naziv;}
};

#endif /* PRAVOKUTNIK_H_ */
