/*
 * Natjecatelj.h
 *
 *  Created on: Sep 20, 2018
 *      Author: ivan
 */

#ifndef NATJECATELJ_H_
#define NATJECATELJ_H_

#include <iostream>
#include <vector>
#include "Zivotinja.h"
using namespace std;

class Natjecatelj {
private:
	string ime;
	string prezime;
	char spol;

public:

	vector<Natjecatelj*> simpatije;

	vector<Zivotinja> zivVoli;

	vector<Zivotinja> zivNevoli;

	Natjecatelj(void);

	Natjecatelj(string ime, string prezime, char spol) :
		ime(ime), prezime(prezime), spol(spol) {};

	void dodajSimpatiju(Natjecatelj* x)
	{
		simpatije.push_back(x);
	};

	void dodajZivotinju(Zivotinja& z, bool svidja)
	{
		if(svidja) zivVoli.push_back(z);
		else zivNevoli.push_back(z);
	};

	int voliZivotinju(Zivotinja& z)
	{
		for(unsigned int i(0); i<zivVoli.size(); i++)
		{
			if(zivVoli[i].getNaziv() == z.getNaziv())
			return 1;
		}
		for(unsigned int i(0); i<zivNevoli.size(); i++)
		{
			if(zivVoli[i].getNaziv() == z.getNaziv())
			return -1;
		}
		return 0;
	};

	string getPunoIme(){return ime+prezime;};

	void setPunoIme(string ime, string prezime)
	{
		ime = ime; prezime = prezime;
	};

	char getSpol() {return spol;};

	void setSpol(char spol) {spol = spol;};

	unsigned int nadjiSimpatiju(string punoIme)
	{
		unsigned int I = 0;
		for(unsigned int i(0); i<simpatije.size(); i++)
		{
			if(simpatije[i]->getPunoIme() == punoIme)
			{
				I++;
			}
		}
		return I;
	};

};

#endif /* NATJECATELJ_H_ */
