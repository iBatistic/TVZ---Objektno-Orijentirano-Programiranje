/*
 * Osiguranje.cpp
 *
 *  Created on: Aug 21, 2018
 *      Author: ivan
 */

#include "Osiguranje.h"

void Osiguranje::dodajKlijenta(Osoba* o){
	klijenti.push_back(o);
};

Osoba* Osiguranje::dohvatiKlijenta(string oib){
	vector<Osoba*>::iterator it;
	for(it = klijenti.begin(); it != klijenti.end(); it++)
	{
		int indeks = distance(klijenti.begin(), it);

		if(klijenti[indeks]->getOib() == oib){
			return klijenti[indeks];
		}
	}
	return NULL;
};

Polica* Osiguranje::dohvatiPolicu(string broj){
	vector<Osoba*>::iterator it;

	for(it = klijenti.begin(); it != klijenti.end(); it++)
	{
		int indeks = distance(klijenti.begin(), it);

		for(unsigned int i = 0; i < klijenti[indeks]->getPolice().size(); i++){

			if(klijenti[indeks]->getPolice()[i]->getBroj() == broj)
			{
				return klijenti[indeks]->getPolice()[i];
			}

		}
	}
	return NULL;
};

Polica* Osiguranje::dohvatiNajvrijednijuPolicu(){
	vector<Osoba*>::iterator it;
	Polica* pPolica = klijenti[0]->getPolice()[0];
													;
	for(it = klijenti.begin(); it != klijenti.end(); it++)
	{
		int indeks = distance(klijenti.begin(), it);

		for(unsigned int i = 1; i < klijenti[indeks]->getPolice().size(); i++){

			if(klijenti[indeks]->getPolice()[i]->getPremija() > pPolica->getPremija())
			{
				pPolica =  klijenti[indeks]->getPolice()[i];
			}

		}
	}
	return pPolica;

};


double Osiguranje::getTotalPremija() const {
	vector<Osoba*>::const_iterator it;
	double sum(0);
	for(it = klijenti.begin(); it != klijenti.end(); it++)
	{
		int indeks = distance(klijenti.begin(), it);

		for(unsigned int i = 0; i < klijenti[indeks]->getPolice().size(); i++){
			sum += klijenti[indeks]->getPolice()[i]->getPremija();
		}
	}
	return sum;
};


