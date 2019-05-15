//============================================================================
// Name        : VJ-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Ducan.h"
using namespace std;

int main() {

	Ducan A("Studenac");
	A.postaviRadnoVrijeme("8-20", "8-15", "8-13");
	A.dodajTag("LAB");
	A.dodajTag("KOR");

	A.dodajArtikl(Artikl("Cokolada",100));
	A.dodajArtikl(Artikl("Mlijeko",56));
	A.dodajArtikl(Artikl("Pastrva",150));

	A.ispisOsnovnihPodataka();
	A.ispisArtikala();

	cout <<"Ukupna cijena svih artikala: " << A.getUkCijenaSvihArtikala() << endl;

	return 0;
}
