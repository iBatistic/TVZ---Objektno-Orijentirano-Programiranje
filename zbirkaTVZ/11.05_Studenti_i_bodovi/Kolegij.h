/*
 * Kolegij.h
 *
 *  Created on: Aug 26, 2018
 *      Author: ivan
 */

#ifndef KOLEGIJ_H_
#define KOLEGIJ_H_

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include "Bodovi.h"
using namespace std;

class Kolegij {
private:
	string naziv;
	vector<Bodovi> bodovi;

public:

	static bool sortiraj(const Bodovi &a, const Bodovi &b)
	{
	    return (a.getBodovi() < b.getBodovi());
	}

	Kolegij(string naziv, vector<Bodovi> bodovi) : naziv(naziv), bodovi(bodovi)
	{
		sort(bodovi.begin(), bodovi.end(), sortiraj);

		for(unsigned int i=0; i<bodovi.size(); i++)
		{
			cout << setw(16) << left << bodovi[i].getStudent().getIme() << flush;
			cout << setw(13) << left << bodovi[i].getStudent().getOib() << flush;
			cout << setw(5) << right << bodovi[i].getBodovi() << endl;
		}
	};

	virtual ~Kolegij() {};
};

#endif /* KOLEGIJ_H_ */
