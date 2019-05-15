//============================================================================
// Name        : 22_Najcesce_ime.cpp
// Author      : Ivan Batistic
// Version     : /
// Copyright   : /
// Description : Najcesce_ime
//============================================================================

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

	int N;
	cout << "Uneiste N: " << flush;
	cin >> N;

	vector<string> Imena;
	map<string, int> Mapa;
	Imena.reserve(N);

	while(N--){
		string ime;
		cout << "Unesite ime: " << flush;
		cin >> ime;
		Imena.push_back(ime);
	}

	for(unsigned int i(0); i<Imena.size(); i++)
	{
		map<string, int>::iterator it = Mapa.find(Imena[i]);

		if(it == Mapa.end())
		{
			Mapa.insert(pair<string, int>(Imena[i],1));
		}
		else
		{
			Mapa[Imena[i]] += 1;
		}
	}

	typedef map<string, int>::iterator iterator;
	iterator max= Mapa.begin();
	for(iterator it = Mapa.begin(); it != Mapa.end(); ++it)
	{
		if(it->second > max->second)
			max = it;
	}

	if(max->second > 1)
		cout << "Najcesce ime: " << max->first << " (" << max->second <<" puta)"<< endl;
	else
		cout << "Nema najcesceg imena." << endl;

	return 0;
}
