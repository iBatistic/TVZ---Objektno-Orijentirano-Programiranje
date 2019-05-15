/*
 * Kvadrat.h
 *
 *  Created on: May 30, 2018
 *      Author: ivan
 */

#ifndef KVADRAT_H_
#define KVADRAT_H_
#include "GeometrijskiLik.h"
using namespace std;

class Kvadrat : public GeometrijskiLik {
private:
	double a;

public:
	double Opseg(){return 4*a;}

	double Povrsina(){return a*a;}

	Kvadrat(double s, string naziv = "Kvadrat"){a = s; Naziv = naziv;}
};

#endif /* KVADRAT_H_ */
