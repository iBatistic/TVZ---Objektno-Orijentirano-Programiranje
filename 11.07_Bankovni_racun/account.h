/*
 * account.h
 *
 *  Created on: Aug 14, 2018
 *      Author: ivan
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
using namespace std;

class account {
private:
	string brojRacuna_;

	string tipKlijenta_;

	string tipRacuna_;

public:
	void setBrojRacuna();

	bool checkSize();

	bool checkFirstDigit();

	void checkInfo();

	void setTipKlijenta();

	bool checkClientType();

	void setTipRacuna();

	bool checkAccountType();

	account();

	account(string brojRacuna, string tipKlijenta, string tipRacuna);

	~account();
};

#endif /* ACCOUNT_H_ */
