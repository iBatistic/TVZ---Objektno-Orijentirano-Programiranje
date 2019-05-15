/*
 * Artikl.h
 *
 *  Created on: Aug 22, 2018
 *      Author: ivan
 */

#ifndef ARTIKL_H_
#define ARTIKL_H_

#include <iostream>
using namespace std;

class Artikl {
public:
	string naziv;
	double cijena;
	Artikl(){
		naziv = "";
		cijena = (double)0;
	};
	Artikl(string naziv, double cijena){
		this->naziv = naziv;
		this->cijena = cijena;
	};
};

#endif /* ARTIKL_H_ */
