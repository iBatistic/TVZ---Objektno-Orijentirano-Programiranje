//============================================================================
// Name        : 3_Evidencija.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Predmet {
	string naziv;
	int vrijednost;

public:

	Predmet(string naziv, int vrijednost) :
		naziv(naziv), vrijednost(vrijednost) {}

	string getNaziv() {return naziv;}

	int getVrijednost() {return vrijednost;}
};


class Garaza {
	int sirina;
	int duzina;
	string lokacija;
	string vrata;
	vector<Predmet> predmeti;

public:

	Garaza(int sir, int duz, string lok, string vrata) :
		sirina(sir), duzina(duz), lokacija(lok), vrata(vrata) {}

	void dodajPredmet(Predmet A){predmeti.push_back(A);}

	int getSirina() {return sirina;}

	int getDuzina() {return duzina;}

	string getLokacija() {return lokacija;}

	void ispisPredmeta()
	{
		for(unsigned int i(0); i < predmeti.size(); i++)
		{
			cout << predmeti[i].getNaziv() << " ("
					<< predmeti[i].getVrijednost() << ") " << flush;
		}
	}

};

int main() {

	vector<Garaza> garaze;
	int brojGaraza;
	cout << "Unesite broj garaža (N): " << flush;
	cin >> brojGaraza;
	cout << endl;
	garaze.reserve(brojGaraza);

	for(int i(0); i < brojGaraza; i++)
	{
		cout << "Unesite velicinu, lokaciju i podatak o vratima za "
				<< i+1 << " garazu: " << endl;

		int sirina,duzina;
		string vrata,lokacija;
		cin >> duzina >> sirina;
		getline(cin >> ws,lokacija);
		cin >> vrata;

		garaze.push_back(Garaza (sirina, duzina, lokacija, vrata));

		cout << endl;
	}


	cout << "Unesite broj predmeta (M): " << flush;
	int brojPredmeta;
	cin >> brojPredmeta;

	while(brojPredmeta--)
	{
		cout << "Unesite redni broj garaze u koju spada " << brojPredmeta + 1
				<< ". predmet: " << flush;
		int redniBroj;
		cin >> redniBroj;

		cout << "Unesite naziv i vrijednost predmeta: " << flush;
		int vrijednost;
		string naziv;
		cin >> naziv >> vrijednost;

		garaze[redniBroj-1].dodajPredmet(Predmet (naziv, vrijednost));
	}

	cout << endl << "Ispis garaza i predmeta:" << endl;

	for (unsigned int i(0); i < garaze.size(); i++)
	{
		cout << i+1 << ". " << garaze[i].getLokacija() << " "
				<< garaze[i].getDuzina() << "x" << garaze[i].getSirina()
				<< " - predmeti: " << flush;

		garaze[i].ispisPredmeta();
		cout << endl;
	}

	return 0;
}
