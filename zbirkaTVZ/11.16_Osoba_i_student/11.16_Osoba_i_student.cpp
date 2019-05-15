//============================================================================
// Name        : 16_Osoba_i_student.cpp
// Author      : Ivan Batistic
// Version     :
// Copyright   : 
// Description : Osoba i student [VJ-7]
//============================================================================

#include <iostream>
using namespace std;

class Osoba {
public:
	string Ime;
	string Prezime;
	string OIB;

	virtual void radniStatus()
	{
		cout << "Osoba nema radni status!" << endl;
	}

	Osoba(string ime, string prezime) : Ime(ime), Prezime(prezime) {}

	Osoba (string oib) : OIB(oib) {};

	virtual ~Osoba(){}
};

class Student : public Osoba {
public:
	string NazivStudija;
	string Smjer;
	int Semestar;

	Student(string ime, string prezime, string NS, string Smjer, int Semestar) :
		Osoba(ime, prezime), NazivStudija(NS), Smjer(Smjer), Semestar(Semestar)
	{}

	Student(string oib, string NS, string Smjer, int Semestar) :
		Osoba(oib), NazivStudija(NS), Smjer(Smjer), Semestar(Semestar)
	{}

	void radniStatus()
	{
		cout << "Redovni student!" << endl;
	}
};

int BrojStudenata(Student* p, int elem, int semestar)
{
	int br(0);
	for(int i(0); i < elem; i++)
	{
		if(p[i].Semestar == semestar)
			br++;
	}
	return br;
};

int main() {

	Student grupaA = (
			Student ("12345","Strojarstvo","Konst",2),
			Student ("23423","Modeliranje","Mode",3),
			Student ("43535","Brodogradnja","Brod",5),
			Student ("34567","Informatika","Info",2),
			Student ("88766","Strojarstvo","Konst",3)
	);

	cout << "Broj studenata u 2 semestru: " << BrojStudenata(&grupaA, 5, 2) << endl;

	return 0;
}
