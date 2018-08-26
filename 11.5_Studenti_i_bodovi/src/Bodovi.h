/*
 * Bodovi.h
 *
 *  Created on: Aug 26, 2018
 *      Author: ivan
 */

#ifndef BODOVI_H_
#define BODOVI_H_

#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

class Bodovi {
private:
	pair<Student,int> par;

public:

	Bodovi(Student student, int bodovi)
	{
		par = make_pair(student,bodovi);
	};

	int getBodovi() const {return par.second;}

	Student getStudent() const {return par.first;}

	virtual ~Bodovi(){};
};

#endif /* BODOVI_H_ */
