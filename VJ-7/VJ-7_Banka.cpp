//============================================================================
// Name        : VJ-7-Banka.cpp
// Author      : Batistic
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
using namespace std;
#include "Osoba.h"
#include "Banka.h"

int main() {

	//Naziv banke i osnovica place
	Banka b("OTP Banka", 4000);

	b.dodajZaposlenika(Zaposlenik("02263822039", "Jozo", "Skrka", 14));
	b.dodajZaposlenika(Zaposlenik("01263811119", "Gabriel", "Pacer", 17));
	b.dodajZaposlenika(Zaposlenik("88263814519", "Ivan", "Gernovac", 19));
	b.dodajZaposlenika(Zaposlenik("93202728289", "Marko", "Grozdek", 12));
	b.dodajZaposlenika(Zaposlenik("26492792832", "Zrle", "Karlic", 3));

	b.dodajKlijenta(Klijent("59486064984", "Pero", "Lozac", 4000));
	b.dodajKlijenta(Klijent("43532453546", "Danijel", "Lazar", 9000));
	b.dodajKlijenta(Klijent("56756678887", "Stevo", "Gabrisa", 1000));
	b.dodajKlijenta(Klijent("98095094130", "Stojan", "Mihovic", 2500));
	b.dodajKlijenta(Klijent("99899898564", "Denis", "Tenis", 18000));
/*
	int brZaposlenika;

	cin >> brZaposlenika;

	while (brZaposlenika--) {
		//Ucitavanje podataka o jednom zaposleniku
		string oib, ime, prezime;
		double koefPlace;
		cin >> oib >> ime >> prezime >> koefPlace;
		b.dodajZaposlenika(Zaposlenik(oib, ime, prezime, koefPlace));
	}

	int brKlijenata;

	cin >> brKlijenata;
	while (brKlijenata--) {
		//Ucitavanje podataka o jednom klijentu
		string oib, ime, prezime;
		double saldo;
		cin >> oib >> ime >> prezime >> saldo;
		b.dodajKlijenta(Klijent(oib, ime, prezime, saldo));
	}
*/
	cout << b << endl;
	int brQuery;
	cin >> brQuery;

	while (brQuery--) {
		char tipOsobe;
		string q;

		cin >> tipOsobe >> q; //Z - zaposlenik, K - klijent
		// Prvo se upisuje tip Z/K onda string q

	if (tipOsobe == 'Z')
	{
			Zaposlenik* z = b.nadjiZaposlenika(q);
			if (z == NULL)
			{
				continue;
			}
			cout << *z << endl;
			cout << "Zaposlenik: \n"<<"Ime: " << z->getIme()
					<< " Prezime: "<< z->getPrezime() << " OIB: " << z->getOib() << endl;
	}
	else if (tipOsobe == 'K')
	{
			Klijent* k = b.nadjiKlijenta(q);
			if (k == NULL)
				continue;
			cout << *k << endl;
			char tipTransakcije;
			double kolicina;
			cin >> tipTransakcije >> kolicina; //U - iplata, I - isplata
			if (b.odobrenaTransakcija(tipTransakcije, kolicina, k)) {
				k->provediTransakciju(tipTransakcije, kolicina);
				cout << "Odobreno" << endl;
			} else {
				cout << "Transakcija nije odobrena" << endl;
			}
	}
	}

	Zaposlenik* najPlaca = b.najplacenijiZaposlenik();
	cout << *najPlaca << endl;
	Klijent* najSaldo = b.najsaldoKlijent();
	cout << *najSaldo << endl;

	return 0;
}
