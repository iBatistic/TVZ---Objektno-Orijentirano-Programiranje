//============================================================================
// Name        : 4_Racuni_i_Artikli.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Kupac.h"
using namespace std;

int main() {
	Kupac Ante(Racun(1)); // Ante ima račun broj 1
	Ante.racun.dodaj(Artikl("Jabuka", 1, 6)); // 1 kg, 6 kn/kg
	Ante.racun.dodaj(Artikl("Banana", 2, 7.5)); // 2 kg, 7.5 kn/kg
	Ante.racun.dodaj(Artikl("Coca cola 2l", 2, 10)); // 2 boce, 10 kn/boca
	cout << "Ukupno: " << Ante.racun.ukupnaCijena << " kn" << endl; // 41 kn
	/* U nastavku ispišite koji je najskuplji artikl kojeg je Ante platio
	(naziv i ukupna cijena). Npr.
	Najskuplje placeni artikl je Coca cola 2l (20kn)
	*/
	Ante.racun.najskupljiArikl();
	return 0;
}
