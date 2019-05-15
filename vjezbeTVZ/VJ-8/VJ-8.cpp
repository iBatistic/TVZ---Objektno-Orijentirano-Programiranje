//============================================================================
// Name        : VJ-8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Osoba.h"
#include "Osiguranje.h"
#include "Polica.h"
#include "Kasko.h"
#include "Imovina.h"
using namespace std;


int main() {

	Osiguranje o;
	int kCnt, pCnt, qCnt;
	cout << "Ukupan broj klijenata: " << flush;
	cin >> kCnt;
	for (int i = 0; i < kCnt; i++) {
		cout << "Unos jednog klijenta, ime prezime oib dob: " << flush;
		string ime, prezime, oib;
		int dob;
		cin >> ime >> prezime >> oib >> dob;
		o.dodajKlijenta(new Osoba(ime, prezime, oib, dob));
	}

	cout << "Ukupan broj polica: " << flush;
	cin >> pCnt;
	for (int i = 0; i < pCnt; i++) {
		//Unos jedne police
		string broj, oib;
		char tip;
		cout << "Tip broj oib: " << flush;
		cin >> tip >> broj >> oib;
		Osoba* klijent = o.dohvatiKlijenta(oib);
		if (tip == 'K') //Polica je kasko
				{
			Kasko* k = new Kasko(broj, oib);
			int s, v;
			cout << "Starost, nabavna cijena: " << flush;
			cin >> s >> v; //Za kasko unosimo starost auta i nabavnu vrijednost
			k->setData(s, v, klijent->getDob());
			o.dohvatiKlijenta(oib)->dodajPolicu(k);
		}
		if (tip == 'I') //Polica je imovina
				{
			Imovina* i = new Imovina(broj, oib);
			int p;
			double r;
			cout << "Procjenjena vrijednost, faktor rizika: " << flush;
			cin >> p >> r; //Za imovinu unosimo procjenjenu vrijednost i faktor rizika
			i->setData(p, r);
			o.dohvatiKlijenta(oib)->dodajPolicu(i);
		}
	}
	cout << "Broj upita: " << flush;
	cin >> qCnt;
	for (int i = 0; i < qCnt; i++) {
		string broj;
		cout << "Broj police koji nas zanima: " << flush;
		cin >> broj; //Učitavamo broj police koji nas zanima
		Polica* p = o.dohvatiPolicu(broj);
		p->ispis();
	}
	cout << "Top polica" << endl;
	Polica* najP = o.dohvatiNajvrijednijuPolicu();
	najP->ispis();
	cout << "Ukupna premija" << endl;
	cout << o.getTotalPremija() << endl;
	return 0;
}
