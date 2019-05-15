//============================================================================
// Name        : 2_Prosjek_ocjena.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;


double ProsjekKolegija(vector<Student> Studenti, string imeKolegija)
{
	int brojStudenata(0);

	for(unsigned int i = 0; i < Studenti.size(); i++)
	{
		brojStudenata += Studenti[i].findKolegij(imeKolegija);
	}

	double prosjekOcjena(0.0);

	for(unsigned int i = 0; i < Studenti.size(); i++)
	{
		prosjekOcjena += Studenti[i].findKolegijGetOcjena(imeKolegija);
	}

	if(brojStudenata > 0)
	{
		return prosjekOcjena / brojStudenata;
	}
	else
	{
		return 0;
	}
}


int main() {

	int brojStudenata;
	cout << "Unesite broj studenata: " << flush; // prints !!!Hello World!!!
	cin >> brojStudenata; cout << endl;

	vector<Student> studenti;
	studenti.reserve(brojStudenata);

	for(int I=0; I < brojStudenata; I++)
	{
		cout << "Unesi ime i prezime " << I+1 << ".studenta:" << flush;
		string ime,prezime;
		cin >> ime >> prezime;

		studenti.push_back(Student(ime,prezime));

		int brKolegija;
		cout << "Unesi broj kolegija studenta: " << flush;
		cin >> brKolegija;

		for (int i =0; i < brKolegija; i++)
		{
			cout << "Unesite naziv i ocjenu za " << i+1
					<< ". kolegij: " << flush;
			string imeKolegija;
			int ocjenaKolegija;
			cin >> imeKolegija >> ocjenaKolegija;

			Kolegij tmp(imeKolegija, ocjenaKolegija);
			studenti[I].dodajKolegij(tmp);
		}
		cout << endl;
	}

	cout << "Unesite naziv kolegija: " << flush;
	string nazivKolegija;
	cin >> nazivKolegija;

	cout << "Prosjek ocjena iz kolegija " << nazivKolegija << " iznosi "
			<< ProsjekKolegija(studenti, nazivKolegija) << endl;

	return 0;
}
