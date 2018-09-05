//============================================================================
// Name        : VJ-3_Bankovni_racun.cpp
// Author      : Batistic
// Version     : /
// Copyright   : /
// Description : [VJ-3]
//============================================================================

#include <iostream>
#include "account.h"
using namespace std;

int main() {

	int i;
	cout << "Unesite broj bankovnih racuna: " << endl;
	cin >> i;

	account *racuni =  new account[i];
	int c = 0;

	do{
		account &racun = racuni[c];

		racun.setBrojRacuna();

		if(racun.checkSize() == 0 | racun.checkFirstDigit() == 0 )
		{
			cout << "Broj racuna nije dobro unesen!" << endl;
			racun.checkInfo();
			break;
		}

		racun.setTipKlijenta();

		if(racun.checkClientType() == 0)
		{
			cout << "Wrong client type!" << endl;
			break;
		}

		racun.setTipRacuna();

		if(racun.checkAccountType() == 0)
		{
			cout << "Wrong account type!" << endl;
			break;
		}

		c++;
		cout << "Racun broj " << c << " uspjesno zaveden!" << endl;
    }while(c!=i);

	return 0;
}
