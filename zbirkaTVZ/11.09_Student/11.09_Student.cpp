//============================================================================
// Name        : 09_Student.cpp
// Author      : Ivan Batistic
// Version     : /
// Copyright   : /
// Description : Student [VJ-4]
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
	char* niz;

public:
	Student(){
		niz = NULL;
	}

	Student(char* jmbg)
	{
		niz = new char[20];
		strcpy(niz, jmbg);
	}

	~Student(){cout << "Deleting " << this << endl;}

	char* GetJMBAG() const
	{
		return niz;
	}

	void SetJMBAG(char* noviJMBAG)
	{
		strcpy(niz,noviJMBAG);
	}

	// Copy constructor
	Student(const Student& other)
	{
		niz = new char[20];
		strcpy(niz, other.niz);
	}

	// Assigment operator
	Student & operator = (Student& other)
	{
		if(niz != NULL)
		{
			delete[] niz;
		}
		niz = new char[20];
		strcpy(niz, other.niz);

		return *this;
	}
};

int main() {

	Student Ante("1122334455");
	Student Ivica = Ante; // Copy constructor

	Ante.SetJMBAG("6677889900");
	cout << Ante.GetJMBAG() << endl; // 6677889900
	cout << Ivica.GetJMBAG() << endl; // 6677889900 ?!?!

	Student Marko;
	Marko = Ante; // Asigment operator
	Marko.SetJMBAG("1234567890");
	cout << Marko.GetJMBAG() << endl; // 1234567890
	cout << Ante.GetJMBAG() << endl; // 1234567890 ?!?!

	return 0;
}
