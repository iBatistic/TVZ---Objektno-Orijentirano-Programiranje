/*
 * GeometrijskiLik.h
 *
 *  Created on: May 30, 2018
 *      Author: ivan
 */

#ifndef GEOMETRIJSKILIK_H_
#define GEOMETRIJSKILIK_H_
#include <string>
using namespace std;

class GeometrijskiLik {
public:
	string Naziv;

	virtual double Opseg() = 0;
	virtual double Povrsina() = 0;
};

#endif /* GEOMETRIJSKILIK_H_ */
