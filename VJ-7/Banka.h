/*
 * Banka.h
 *
 *  Created on: Aug 17, 2018
 *      Author: ivan
 */

#ifndef BANKA_H_
#define BANKA_H_

#include <iostream>
#include <vector>
#include "Osoba.h"
#include "Klijent.h"
#include "Zaposlenik.h"
//using namespace std;

class Banka {
private:
	double osnovica;
	string naziv;
	vector<Zaposlenik> Zaposlenici;
	vector<Klijent> Klijenti;

public:

	void dodajKlijenta(Klijent a)
	{
		Klijenti.push_back(a);
	}

	void dodajZaposlenika(Zaposlenik a)
	{
		Zaposlenici.push_back(a);
	};

	Klijent* najsaldoKlijent() {
		double max(0);
		int index(0);
		for(vector<Klijent>::iterator it=Klijenti.begin(); it != Klijenti.end(); it++)
		{
			if((it->Saldo() ) > max )
			{
				max = it->Saldo();
				index = std::distance( Klijenti.begin(), it );
			}
		}
		return &Klijenti[index];
	};

	Zaposlenik* najplacenijiZaposlenik(){
		double max(0);
		int index(0);
		for(vector<Zaposlenik>::iterator it=Zaposlenici.begin(); it != Zaposlenici.end(); it++)
			{
				if((it->koef() * osnovica ) > max )
				{
					max = it->koef() * osnovica;
					index = std::distance( Zaposlenici.begin(), it );
				}
			}
		return &Zaposlenici[index];
	};


	Zaposlenik* nadjiZaposlenika(string q){
		int index(-1);
		for(vector<Zaposlenik>::iterator it=Zaposlenici.begin(); it != Zaposlenici.end(); it++)
		{
			if((it->getPrezime() == q) | (it->getOib() == q))
			{
				index = std::distance( Zaposlenici.begin(), it );
				return &Zaposlenici[index];
			}
		}
		if (index == -1)
			return NULL;
	};

	Klijent* nadjiKlijenta(string q){
		int index(-1);
		for(vector<Klijent>::iterator it=Klijenti.begin(); it != Klijenti.end(); it++)
		{
			if((it->getPrezime() == q) | (it->getOib() == q))
			{
				index = std::distance( Klijenti.begin(), it );
				return &Klijenti[index];
			}
		}
		if (index == -1)
			return NULL;
	};

	bool odobrenaTransakcija(char tipTransakcije, double kolicina, Klijent* k){

		if (tipTransakcije == 'U')
		{
			if((kolicina + k->Saldo()) > 1500)
			{
				return true;
			}
		}

		if (tipTransakcije == 'I')
		{
			if(((kolicina + k->Saldo()) > 1500) & (((k->Saldo()+kolicina)/k->Saldo()) < 0.1))
			{
				return true;
			}
		}

		return false;
	};

	Banka(string naziv,double osnovica)
	{
		this->naziv = naziv;
		this->osnovica = osnovica;
	};
	virtual ~Banka(){};

	friend ostream& operator <<(ostream &s,Banka &b){
		s << b.naziv << " " << b.osnovica << endl;
		return s;
	};
};

#endif /* BANKA_H_ */

