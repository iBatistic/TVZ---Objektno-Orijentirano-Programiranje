/*
 * Farma.h
 *
 *  Created on: Sep 20, 2018
 *      Author: ivan
 */

#ifndef FARMA_H_
#define FARMA_H_

#include "Natjecatelj.h"
#include "Zivotinja.h"

class Farma {
public:

	vector<Natjecatelj> natjecatelji;

	vector<Zivotinja> zivotinje;

	Farma(void){};

	void dodajNatjecatelja(Natjecatelj x)
	{
		natjecatelji.push_back(x);
	};

	void dodajZivotinju(Zivotinja z)
	{
		zivotinje.push_back(z);
	};

	Natjecatelj* nadji(string ime, string prezime)
	{
		for(unsigned int i(0); i<natjecatelji.size(); i++)
		{
			if(natjecatelji[i].getPunoIme() == ime+prezime)
			{
				return &natjecatelji[i];
			}
		}
		return NULL;
	};

	double getVjerojatnostLjubavi(Natjecatelj& a, Natjecatelj& b)
	{
		const unsigned int aN = a.simpatije.size();
		const unsigned int bN = b.simpatije.size();
		unsigned int sv(-0.5);
		string aIme = a.getPunoIme();
		string bIme = b.getPunoIme();
		unsigned int sva = a.nadjiSimpatiju(b.getPunoIme());
		unsigned int svb = b.nadjiSimpatiju(a.getPunoIme());
		if(sva+svb == 2)
			sv = 1;
		if(sva+svb == 1)
			sv = 0;

		int brZivS = 0;

		for(unsigned int i=0; i<a.zivVoli.size(); i++)
		{
			string imeZiv = a.zivVoli[i].getNaziv();
			for (unsigned int k=0; k<b.zivVoli.size(); k++)
			{
				if(imeZiv == b.zivVoli[k].getNaziv())
					brZivS++;
			}
		}

		for(unsigned int i=0; i<a.zivNevoli.size(); i++)
		{
			string imeZiv = a.zivNevoli[i].getNaziv();
			for (unsigned int k=0; k<b.zivNevoli.size(); k++)
			{
				if(imeZiv == b.zivNevoli[k].getNaziv())
					brZivS++;
			}
		}

		double brZivN = a.zivVoli.size()+a.zivNevoli.size()-brZivS;
		double v;
		v = (sv+1)*(sv+1);
		v /= (1+aN+bN);
		v *= (1+brZivS);
		v /= (1+brZivS+brZivN*brZivN);
		return v;
	};

	//void ispisiNajizglednijiPar();

};

#endif /* FARMA_H_ */
