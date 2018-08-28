//============================================================================
// Name        : Vjezba_5_Priprema_prosireni_zadatak.cpp

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

void ispisTablice(Skupina& s){
cout << "+--------------------------------------------+" << endl;
cout << "|Pos|" << "Ekipa" << setw(16) << "| P|" << " W|" << " D|" << " L|" << "GS|" << "GC|" << "Pts|" << endl;

int miniPos;
for(unsigned int i=0; i<s.ekipe.size(); i++)
{
	miniPos = i;
	for (unsigned int j = i + 1; j < s.ekipe.size(); j++)
	{
		if (s.izracunajBrojBodova(s.ekipe[j]) >  s.izracunajBrojBodova(s.ekipe[i]))
		{
			miniPos = j;
		}
	}
	string temp = s.ekipe[miniPos];
	s.ekipe[miniPos] = s.ekipe[i];
	s.ekipe[i] = temp;
}


for(unsigned int i=0; i<s.ekipe.size(); i++)
	{
	cout << "|" << flush;
	cout << internal << setw(3) << i+1 << flush; cout << "|" << flush;
	cout << left  << setw(17) << s.ekipe[i] << flush; cout << "|" << flush;
	cout << right << setw(2) << s.brUtakmica(s.ekipe[i]) << flush;  cout << "|" << flush;//P
	cout << right << setw(2) << s.brPobjeda(s.ekipe[i]) << flush;  cout << "|" << flush;//W
	cout << right << setw(2) << s.brojDraftova(s.ekipe[i]) << flush; cout << "|" << flush;//D
	cout << right << setw(2) << s.brGubitaka(s.ekipe[i]) << flush; cout << "|" << flush;//L
	cout << right << setw(2) << s.brPrimljenih(s.ekipe[i]) << flush; cout << "|" << flush;//GS
	cout << right << setw(2) << s.brDanih(s.ekipe[i])<< flush; cout << "|" << flush;//GS
	cout << right << setw(3) << s.izracunajBrojBodova(s.ekipe[i]) << flush; cout << "|" << flush;//Pts
	cout << endl;
}

cout << "+--------------------------------------------+" << endl;
};

int main() {
	cout << "Ucitati Broj ekipa:" << endl;
	 int brojEkipa;
	 cin >> brojEkipa;

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

	 ispisTablice(A);


	return 0;
}
