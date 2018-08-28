/*
 * Krug.h
 *
 *  Created on: May 30, 2018
 *      Author: ivan
 */

#ifndef KRUG_H_
#define KRUG_H_
#include "GeometrijskiLik.h"
#include <cmath>
using namespace std;

class Krug : public GeometrijskiLik{
private:
	double r;

public:
	double Opseg(){return 2*r*M_PI;}

	double Povrsina(){return pow(r,2)*M_PI;}

	Krug(double s, string naziv = "Krug"){r = s; Naziv = naziv;}
};

#endif /* KRUG_H_ */
