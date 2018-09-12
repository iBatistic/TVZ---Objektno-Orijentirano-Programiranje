//============================================================================
// Name        : 05_Najstarija_osoba.cpp
// Author      : Ivan Batistic
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cctype>

using namespace std;

class Osoba{
private:
	string Ime;
	string Prezime;
	int godinaRodjenja;

public:
	int getGodRod() const {return godinaRodjenja;}
	string getIme() const {return Ime;}
	string getPrezime() const {return Prezime;}
	Osoba(string ime, string prezime, int godRod)
	{
		if(!ime.empty())
		{
			if(!isupper(ime[0]) && isalpha(ime[0]))
			{
				ime[0] = toupper(ime[0]);
			}

			for(unsigned int i = 1; i <= ime.length(); i++)
			{
				if(isupper(ime[i]) && isalpha(ime[i]))
	    		{
	    			ime[i] = tolower(ime[i]);
	    		}
			}
		}

		Ime = ime;

		if(!prezime.empty())
		{
			if(!isupper(prezime[0]) && isalpha(prezime[0]))
			{
				prezime[0] = toupper(prezime[0]);
			}

			for(unsigned int i = 1; i <= prezime.length(); i++)
			{
				if(isupper(prezime[i]) && isalpha(prezime[i]))
	    		{
	    			prezime[i] = tolower(prezime[i]);
	    		}
			}
		}

		Prezime = prezime;

		if(godRod < 1900)
		{
			godinaRodjenja = 1900;
		}
		else
		{
			godinaRodjenja = godRod;
		}

	}

	Osoba(){};
};


int main() {

	int brOsoba = 5;
	int counter(0);
	Osoba osobe[brOsoba];

	do
	{
		string Ime,Prezime;
		int godinaRodjenja;
		cout << "Unesite ime, prezime i godinu rodjenja: " << flush;
		cin >> Ime >> Prezime >> godinaRodjenja;
		osobe[counter] = Osoba(Ime,Prezime,godinaRodjenja);
		counter++;
	}while(counter < brOsoba);

	int indeks(0);
	for(int i(0); i<(brOsoba-1); i++)
	{
		if(osobe[i+1].getGodRod() < osobe[i].getGodRod())
			indeks = i+1;
	}

	cout << "Najstarija osoba: " << osobe[indeks].getIme()
		 << " " << osobe[indeks].getPrezime() << endl;

	return 0;
}
