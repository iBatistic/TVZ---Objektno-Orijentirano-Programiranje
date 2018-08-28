/*
 * Ducan.h
 *
 *  Created on: Aug 22, 2018
 *      Author: ivan
 */

#ifndef DUCAN_H_
#define DUCAN_H_
#include <iostream>
#include <vector>
#include "Artikl.h"
using namespace std;

class Ducan {
public:
	Artikl* artikli;
	string adresa;
	string* tagovi;
	string radnoVrijemeTjedan;
	string radnoVrijemeSub;
	string radnoVrijemeNed;
	int brArtikala;
	int brTagova;

	Ducan(){
		adresa = "NEMA PODATAKA";
		artikli = new Artikl[10];
		tagovi = new string[10];
		radnoVrijemeTjedan = radnoVrijemeSub = radnoVrijemeNed = "NEMA PODATAKA";
		brArtikala = brTagova = 0;
	};

	Ducan(string adr){
		adresa = adr;
		artikli = new Artikl[10];
		tagovi = new string[10];
		radnoVrijemeTjedan = radnoVrijemeSub = radnoVrijemeNed = "NEMA PODATAKA";
		brArtikala = brTagova = 0;
	};

	void ispisOsnovnihPodataka() {
		cout << "Adresa: " << adresa << "\n" << "Kljucne rijeci: " << flush;
		for(int i = 0; i < brArtikala; i++){
			cout << tagovi[i] << " " << flush;
		}
		cout << "\npon-pet: " << radnoVrijemeTjedan << "\n"
				<< "sub: " << radnoVrijemeSub << "\n"
				<< "ned: " << radnoVrijemeNed << endl;
	};

	void postaviRadnoVrijeme(string rvTjedan, string rvSub, string rvNed)
	{
		radnoVrijemeTjedan = rvTjedan;
		radnoVrijemeSub = rvSub;
		radnoVrijemeNed = rvNed;
	};

	void dodajArtikl(Artikl a){
		artikli[brArtikala] = a;
		brArtikala++;
	}

	void dodajTag(string tag){
		tagovi[brTagova] = tag;
		brTagova++;
	}

	void ispisArtikala(){
		for(int i =0; i<brArtikala; i++){
			cout << artikli[i].naziv << "  " << artikli[i].cijena << endl;
		}
	}
	double getUkCijenaSvihArtikala(){
		double sum(0);
		for(int i =0; i<brArtikala; i++){
			sum += artikli[i].cijena;
		}
		return sum;
	}

	virtual ~Ducan(){
		delete[] artikli;
		delete[] tagovi;
	};
};

#endif /* DUCAN_H_ */
