/*
 * Student.h
 *
 *  Created on: Aug 26, 2018
 *      Author: ivan
 */

#ifndef STUDENT_H_
#define STUDENT_H_


#include "Kolegij.h"
#include <vector>
#include <iostream>
using namespace std;

class Student {
private:
	string ime;
	string prezime;
	vector<Kolegij> kolegiji;

public:
	Student(string ime, string prezime) : ime(ime), prezime(prezime){};

	void dodajKolegij(Kolegij a)
	{
		kolegiji.push_back(a);
	}

	double findKolegijGetOcjena(string imeKolegija)
	{
		for(unsigned int c = 0; c < kolegiji.size(); c++)
		{
			if(kolegiji[c].getImeKolegija() == imeKolegija)
			{
				return kolegiji[c].getOcjenaKolegija();
			}

		}
		return 0;
	}

	int findKolegij(string imeKolegija)
	{
		for(unsigned int c = 0; c < kolegiji.size(); c++)
		{
			if(kolegiji[c].getImeKolegija() == imeKolegija)
			{
				return 1;
			}
		}
		return 0;
	}

};

#endif /* STUDENT_H_ */
