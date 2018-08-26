/*
 * Racun.h
 *
 *  Created on: Aug 26, 2018
 *      Author: ivan
 */

#ifndef RACUN_H_
#define RACUN_H_

#include <iostream>
#include "Artikl.h"
#include <vector>
using namespace std;

class Racun {
private:
	int brojRacuna;
	vector<Artikl> artikli;

public:

	double ukupnaCijena;

	Racun(int brojRacuna) : brojRacuna(brojRacuna)
	{
		ukupnaCijena = 0;
	};

	void dodaj(Artikl artikl)
	{
		artikli.push_back(artikl);
		ukupnaCijena += artikl.getCijena();
		cout << artikl.getKolicina() << " kg, " << artikl.getKnKg()
				<< " kn/kg" << endl;
	}

	void najskupljiArikl()
	{
		cout << "Najskuplje placeni artikl je " << flush;
		double maxCijena(0);
		string naziv;
		for(unsigned int i=0; i < artikli.size(); i++)
		{
			if(artikli[i].getCijena() > maxCijena)
			{
				maxCijena = artikli[i].getCijena();
				naziv = artikli[i].getIme();
			}
		}
		cout << naziv << "  (" << maxCijena << ")" << endl;
	};

	Racun() {};

};

#endif /* RACUN_H_ */
