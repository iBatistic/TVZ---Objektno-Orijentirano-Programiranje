/*
 * Skupina.h
 *
 *  Created on: Aug 18, 2018
 *      Author: ivan
 */

#ifndef SKUPINA_H_
#define SKUPINA_H_
#include <vector>
#include "Utakmica.h"

class Skupina {
private:
	int brEkipa;
	int brojUtakmica;
	vector<string> ekipe;
	vector<Utakmica> utakmice;
public:

	int brUtakmica(const string ekipa) const {
		int brojUtakmica(0);
		for(unsigned int i(0); i < utakmice.size(); i++)
		{
			if((utakmice[i].getDomacin() == ekipa) | (utakmice[i].getGost() == ekipa))
			{
				brojUtakmica++;
			}
		}

		return brojUtakmica;
	};

	int brPobjeda(const string ekipa){
		int brojPobjeda(0);
		for(unsigned int i(0); i < utakmice.size(); i++)
		{
			if((utakmice[i].getDomacin() == ekipa) & (utakmice[i].getBrGolDomaca() > utakmice[i].getBrGolGost()))
			{
				brojPobjeda++;
			}
			if((utakmice[i].getGost() == ekipa) & (utakmice[i].getBrGolDomaca() < utakmice[i].getBrGolGost()))
			{
				brojPobjeda++;
			}
		}

		return brojPobjeda;
	};

	int brGubitaka(const string ekipa){
		int brojGubitaka(0);
		for(unsigned int i(0); i < utakmice.size(); i++)
		{
			if((utakmice[i].getDomacin() == ekipa) & (utakmice[i].getBrGolDomaca() < utakmice[i].getBrGolGost()))
			{
				brojGubitaka++;
			}
			if((utakmice[i].getGost() == ekipa) & (utakmice[i].getBrGolDomaca() > utakmice[i].getBrGolGost()))
			{
				brojGubitaka++;
			}
		}

		return brojGubitaka;
	};

	int brDanih(const string ekipa){
		int brojDanih(0);
		for(unsigned int i(0); i < utakmice.size(); i++)
		{
			if(utakmice[i].getGost() == ekipa)
				brojDanih = brojDanih + utakmice[i].getBrGolDomaca();
			if(utakmice[i].getDomacin() == ekipa)
				brojDanih = brojDanih + utakmice[i].getBrGolGost();
		}
		return brojDanih;
	};

	int brPrimljenih(const string ekipa){
		int brPrimljenih(0);
		for(unsigned int i(0); i < utakmice.size(); i++)
		{
			if(utakmice[i].getGost() == ekipa)
				brPrimljenih = brPrimljenih + utakmice[i].getBrGolGost();
			if(utakmice[i].getDomacin() == ekipa)
				brPrimljenih = brPrimljenih + utakmice[i].getBrGolDomaca();
		}
		return brPrimljenih;
	};

	int brojDraftova(const string ekipa){
		return brUtakmica(ekipa)-brPobjeda(ekipa)-brGubitaka(ekipa);
	};

	int getBrEkipa() {return brEkipa;};
	void setBrEkipa(int a) {brEkipa = a;};
	void dodajEkipu(const string ekipa){
		ekipe.push_back(ekipa);
	};

	string dohvatiEkipu(const int index) const{
		return ekipe[index];
	};

	void napraviZdrijeb(){
		unsigned int C(0);unsigned  int c(0);
		for(int i=0; i<brojUtakmica; i++)
		{
			C++;
			string a = ekipe[c];
			string b = ekipe[C];

			if(C == (ekipe.size()-1))
			{
				c++;
				C = c;
			}
			utakmice.push_back(Utakmica(a,b));
		}

	};

	Utakmica* dohvatiUtakmicu(const string ekipa, const string protivnik){
		vector<Utakmica>::iterator it;
		for(it = utakmice.begin(); it != utakmice.end(); it++)
		{
			if((it->getDomacin() == ekipa) & (it->getGost() == protivnik))
			{
				return &(*it);
			}
			if((it->getDomacin() == protivnik) & (it->getGost() == ekipa))
			{
				return &(*it);
			}
		}
		return NULL;
	};

	int izracunajBrojBodova(const string ekipa) const {
		vector<Utakmica>::const_iterator it;
		int brojBodova = 0;
		for(it = utakmice.begin(); it != utakmice.end(); it++)
		{
			if(it->getDomacin()== ekipa)
			{
				if (it->getBrGolDomaca() > it->getBrGolGost())

				brojBodova += 3;

				if (it->getBrGolDomaca() < it->getBrGolGost())

				brojBodova += 0;

				if (it->getBrGolDomaca() == it->getBrGolGost())

				brojBodova += 1;

			}

			if(it->getGost() == ekipa)
			{
				if (it->getBrGolGost() > it->getBrGolDomaca())

					brojBodova += 3;

				if (it->getBrGolGost() < it->getBrGolDomaca())

					brojBodova += 0;

				if (it->getBrGolGost() == it->getBrGolDomaca())

					brojBodova += 1;

			}
		}
		return brojBodova;
	};

	Skupina(int brojEkipa):brEkipa(brojEkipa){
		int c(0);
		for (int i = 1; i < (brojEkipa - 1); i++)
		{
			c = c + i;
		}
		brojUtakmica = c + (brojEkipa - 1);
	};

	friend void ispisTablice(Skupina& s);

};

#endif /* SKUPINA_H_ */
