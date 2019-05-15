/*
 * Zivotinja.h
 *
 *  Created on: Sep 20, 2018
 *      Author: ivan
 */

#ifndef ZIVOTINJA_H_
#define ZIVOTINJA_H_

#include <iostream>
#include <vector>
using namespace std;

class Zivotinja {
private:
	string naziv;

public:

	Zivotinja(void);

	Zivotinja(string naziv) : naziv(naziv) {};

	string getNaziv() {return naziv;};

	void setNaziv(string naziv)
	{
		this->naziv = naziv;
	};

};

#endif /* ZIVOTINJA_H_ */
