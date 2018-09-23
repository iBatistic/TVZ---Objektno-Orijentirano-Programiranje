//============================================================================
// Name        : VJ-2.cpp
// Author      : Ivan Batistic
// Version     :
// Copyright   : 
// Description : VJ-3
//============================================================================

#include <iostream>
#include "Farma.h"
using namespace std;

int main() {

	Farma A;
	int brZena, brMuskih;
	cin >> brZena >> brMuskih;
	int brNatjecatelja = brMuskih + brZena;

	while(brMuskih--)
	{
		string ime,prezime;
		cin >> ime >> prezime;
		char muski = 'M';

		A.dodajNatjecatelja(Natjecatelj(ime,prezime,muski));
	}

	while(brZena--)
	{
		string ime,prezime;
		cin >> ime >> prezime;
		char zenski = 'Z';

		A.dodajNatjecatelja(Natjecatelj(ime,prezime,zenski));
	}

	int brojZivotinja;
	cin >> brojZivotinja;

	for(int I =0; I<brojZivotinja; I++)
	{
		string imeZivotinje;
		cin >> imeZivotinje;
		A.dodajZivotinju(imeZivotinje);

		for (int i(0); i< brNatjecatelja; i++)
		{
			int B; bool svidja = false;
			cin >> B;
			if(B == 1)
			{
				svidja = true;
			}
			A.natjecatelji[i].dodajZivotinju(A.zivotinje[I],svidja);
		}
	}

	int brojSimpatija;
	cin >> brojSimpatija;
	while(brojSimpatija--){
		string ime,prezime,ime2,prezime2;
		cin >> ime >> prezime >> ime2 >> prezime2;
		Natjecatelj *p = A.nadji(ime,prezime);
		Natjecatelj *P = A.nadji(ime2,prezime2);
		p->dodajSimpatiju(P);
	}

	vector<double> vjerovatnost;
	double vjvMax(0);
	string najPar;
	int brojUpita;
	cin >> brojUpita;
	for(int i(0); i<brojUpita; i++)
	{
		string ime,prezime,ime2,prezime2;
		cin >> ime >> prezime >> ime2 >> prezime2;
		Natjecatelj *p = A.nadji(ime,prezime);
		Natjecatelj *P = A.nadji(ime2,prezime2);
		vjerovatnost.push_back(A.getVjerojatnostLjubavi(*p,*P));
		if(vjerovatnost[i] > vjvMax)
		{
			vjvMax = vjerovatnost[i];
			najPar = p->getPunoIme() + " + " + P->getPunoIme();
		}
	}

	for(int i(0);i < brojUpita; i++)
	{
		cout.precision(4);
		cout.setf(ios::fixed, ios::floatfield);
		cout << vjerovatnost[i] << endl;
	}

	cout << najPar << endl;

	return 0;
}
