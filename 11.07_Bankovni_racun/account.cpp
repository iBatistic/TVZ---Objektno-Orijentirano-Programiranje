/*
 * account.cpp
 *
 *  Created on: Aug 14, 2018
 *      Author: ivan
 */

#include "account.h"

void account::setBrojRacuna(){
	cout << "Unesite broj racuna: " << flush;
	cin >> brojRacuna_;
}

void account::setTipKlijenta(){
	cout << "Unesite tip klijenta: " << flush;
	cin >> tipKlijenta_;
}

void account::setTipRacuna(){
	cout << "Unesite tip racuna: " << flush;
	cin >> tipRacuna_;
}

bool account::checkSize(){
	if (brojRacuna_.size() == 8 )
	{
		return true;
	}else
	{
		return false;
	}
}

bool account::checkFirstDigit(){
	if (brojRacuna_[0] == '0' )
	{
		return true;
	}else
	{
		return false;
	}
}

bool account::checkClientType(){
	if (tipKlijenta_ == "f" | tipKlijenta_ == "p")
	{
		return true;
	}else
	{
		return false;
	}
}

bool account::checkAccountType(){
	if (tipRacuna_ == "tekuci" | tipRacuna_ == "ziro" | tipRacuna_ == "devizni")
	{
		return true;
	}else
	{
		return false;
	}
}

void account::checkInfo(){
	cout << "Number of digits for account: " << brojRacuna_.size() << endl;
	cout << "First digit: " << brojRacuna_[0] << endl;
}

account::account() {}

account::account(string brojRacuna, string tipKlijenta, string tipRacuna) {
	brojRacuna_= brojRacuna;
	tipKlijenta_ = tipKlijenta;
	tipRacuna_ = tipRacuna;
}

account::~account() {}

