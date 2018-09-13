//============================================================================
// Name        : 17_Racuni.cpp
// Author      : Ivan Batistic
// Version     : /
// Copyright   : /
// Description : /
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class Stavka {
private:
	string naziv;
	int kolicina;
	float jedCjena;

public:

	Stavka(string naziv,  int kolicina, float jedCjena) :
		naziv(naziv), kolicina(kolicina), jedCjena(jedCjena) {}

	float cijenaUkupno() {return kolicina * jedCjena;}

	void popustStavke(const float popust)
	{
		jedCjena *= (1-popust);
	}

	void ispisiStavku()
	{
		cout << "Naziv: " << naziv << ", kolicina: " << kolicina
			 << ", jedinicna cijena: " << jedCjena << endl;
	}
};


class Dokument{
protected:
	string autor;
	string datum;
	string vrijemeNastanka;
	string brojRacuna;

public:

	Dokument(string autor, string datum, string vrijemeNastanka, string brojRacuna) :
		autor(autor), datum(datum), vrijemeNastanka(vrijemeNastanka), brojRacuna(brojRacuna) {}

	vector<string> Doc() {
		vector<string> doc (4);
		doc[0] = autor; doc[1] = datum;
		doc[2] =vrijemeNastanka; doc[3] = brojRacuna;
		return doc;
	}

};

class Racun : public Dokument {
private:
	string JIR;
	string tipRacuna;
	vector<Stavka> stavke;

public:

	Racun(string autor, string datum, string vrijemeNastanka, string brojRacuna,
		  string JIR, string tipRacuna) :
	Dokument(autor, datum,vrijemeNastanka, brojRacuna),
	JIR(JIR),
	tipRacuna(tipRacuna){}

	float sumaStavki()
	{
		float suma(0);
		for(unsigned int i=0; i<stavke.size(); i++)
		{
			suma += stavke[i].cijenaUkupno();
		}
		return suma;
	}

	void popust(const float Popust)
	{
		for(unsigned int i=0; i<stavke.size(); i++)
		{
			stavke[i].popustStavke(Popust);
		}
	}

	void dodajStavku(Stavka T)
	{
		stavke.push_back(T);
	}

	void ispisiRacun()
	{
		cout << "Autor: " << Doc()[0] << ", datum: " << Doc()[1]
			 << ", vrijeme nastanka: " << Doc()[2] << ", broj racuna: "
			 << Doc()[3] << endl;
		cout << "JIR: " << JIR << ", tip racuna: " << tipRacuna << endl;
		cout << "STAVKE: " << endl;

		for(unsigned int i=0; i<stavke.size(); i++)
		{
			stavke[i].ispisiStavku();
		}
	}
};



int main() {

	Racun racun("Matosic","22.03","10:34","124","12663231","R1");
	racun.dodajStavku(Stavka("Transport", 14,150));
	racun.dodajStavku(Stavka("Montiranje", 14,15));
	racun.dodajStavku(Stavka("Servis", 1,1500));

	racun.ispisiRacun();

	cout << "Suma stavki: " << racun.sumaStavki() << "\n" << endl;
	racun.popust(0.5);
	racun.ispisiRacun();
	cout << "Suma stavki nakon 50% popusta: " << racun.sumaStavki() << endl;

	return 0;
}
