//============================================================================
// Name        : 19_Racunalo_i_OS.cpp
// Author      : Ivan Batistic
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

class Racunalo
{
public:
	virtual string getName() = 0;
	virtual ~Racunalo(){};
};

class Tablet : public Racunalo
{
private:
	string name;
public:
	Tablet(string name) : Racunalo(), name(name) {};
	string getName() {return name;}
};

class Laptop : public Racunalo
{
private:
	string name;
public:
	Laptop(string name) : Racunalo(), name(name) {};
	string getName() {return name;}
};


void AnalizaUcionice(vector<Racunalo*> Uciona, int* brTableta, int* brLaptopa,
					int* brAndroida, int* brWindowsa, int* brLinuxa)
{
	*brTableta = 0;
	*brLaptopa = 0;
	*brAndroida = 0;
	*brWindowsa = 0;
	*brLinuxa = 0;
	for (unsigned int i = 0; i < Uciona.size(); i++)
	{
		if(typeid((*Uciona[i])) == typeid(Laptop))
		{
			(*brLaptopa)++;
		}
		if(typeid((*Uciona[i])) == typeid(Tablet))
		{
			(*brTableta)++;
		}

		if((*Uciona[i]).getName() == "Android")
			(*brAndroida)++;
		if((*Uciona[i]).getName() == "Windows")
			(*brWindowsa)++;
		if((*Uciona[i]).getName() == "Linux")
			(*brLinuxa)++;
	}

	cout << "U ucionici se nalazi " << Uciona.size() << " racunala" << endl;
	cout << "Broj tablet racunala : " << *brTableta << endl;
	cout << "Broj laptop racunala : " << *brLaptopa << endl;
	cout << "Android OS : " << *brAndroida << endl;
	cout << "Windows OS : " << *brWindowsa << endl;
	cout << "Linux OS : " << *brLinuxa << endl;
};

int main() {
	int brTableta, brLaptopa;
	int brAndroida, brWindowsa, brLinuxa;
	Tablet Acer("Android"), Prestigio("Windows");
	Laptop Dell("Linux"), IBM("Windows"), Toshiba("Windows");
	vector<Racunalo*> Ucionica1 = { &Acer, &Prestigio, &Dell, &IBM, &Toshiba };
	AnalizaUcionice(Ucionica1, &brTableta, &brLaptopa,
					&brAndroida, &brWindowsa,&brLinuxa);

	/* u nastavku ispisite dobivenu analizu ucionice u sljedecem obliku:
	 U ucionici se nalazi 5 racunala
	 Broj tablet racunala : 2
	 Broj laptop racunala : 3
	 Android OS : 1
	 Windows OS : 3
	 Linux OS : 1
	 */
	return 0;
}
