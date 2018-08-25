//============================================================================
// Name        : 6_Kartaski_spil.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Spil.h"
#include "Igrac.h"
using namespace std;

int main() {


	int brojIgraca;
	cout << "Unesite broj igraca: " << flush;
	cin >> brojIgraca;

	Spil A(52);

	cout << "Karte u spilu (" << A.brojKarata() << "):" << endl;

	A.ispis();

	cout << "\n"<< endl;

	vector<Igrac*> igraci;


	for(int i = 0; i < brojIgraca; i++)
	{
		string ime;
		cout << "Unesi ime " << i+1 << ".igraca: " << flush;
		cin >> ime;
		igraci.push_back(new Igrac(ime)) ;
		A.Podijeli4Karte(igraci[i]);
	}

	cout << endl;

	for(int i = 0; i < brojIgraca; i++)
	{
		igraci[i]->ispisKarata();
		cout << endl;
	}
	cout << "\nPreostale karte u spilu (" << A.brojKarata() << "):" << endl;
	A.ispis();



return 0;
}
