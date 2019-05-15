//============================================================================
// Name        : VJ_5_Priprema.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include "Skupina.h"
#include "Utakmica.h"

using namespace std;

int main() {
	 cout << "Ucitati Broj ekipa:" << endl;
	 int brojEkipa;
	 cin >> brojEkipa;
	 int brojEkipa2(brojEkipa);

	 Skupina A(brojEkipa);

	 while(brojEkipa--){
		 string Ekipa;
		 cout << "Ekipa: " << flush;
		 cin >> Ekipa;
		 const string ekipa(Ekipa);
		 A.dodajEkipu(ekipa);
	 }

	 A.napraviZdrijeb();

	 int brGolova;
	 cout << "Unesite broj golova: " << flush;
	 cin >> brGolova;

	 while(brGolova--)
	 {
		 string ek1,ek2;
		 cin >> ek1 >> ek2;
		 Utakmica *p = A.dohvatiUtakmicu(ek1,ek2);
		 p->dodajGol(ek1);
	 }

	 int c(0);
	 while(brojEkipa2--){
		 string ekipa = A.dohvatiEkipu(c);
		 cout << ekipa << flush;
		 cout << setw(5) << A.izracunajBrojBodova(ekipa) << endl;
		 c++;
	 }


return 0;
}
