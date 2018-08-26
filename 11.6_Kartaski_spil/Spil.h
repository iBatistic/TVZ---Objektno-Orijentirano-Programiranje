/*
 * Spil.h
 *
 *  Created on: Aug 25, 2018
 *      Author: ivan
 */

#ifndef SPIL_H_
#define SPIL_H_

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include "Igrac.h"
using namespace std;

class Spil {
private:
	vector<int> spil;
	int brKarata;
public:

	Spil(int c) : brKarata(c)
	{
		spil.reserve(c);
		for(int i = 0; i<52; i++)
		{
			spil.push_back(i+1);
		}
		random_shuffle(spil.begin(),spil.end());
	};

	void ispis() const
	{
		for(unsigned int i=1; i<spil.size()+1; i++)
		{
			cout << setw(6) <<spil.at(i-1) <<  flush;
			int c = i % 10;
			if((c == 0) & (i != 0))
			{
				cout << endl;
			}
		}
	};

	void Podijeli4Karte(Igrac *igrac)
	{
		vector<int> tmp;
		for(int i = 0; i<4; i++)
		{
			tmp.push_back(spil[i]);
		}
		spil.erase(spil.begin(), spil.begin()+4);
		igrac->dodajKarte(tmp);
		brKarata -= 4;
	}

	int brojKarata() {return brKarata;};

	virtual ~Spil(){};
};

#endif /* SPIL_H_ */
