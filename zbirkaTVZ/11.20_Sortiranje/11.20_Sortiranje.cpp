//============================================================================
// Name        : 20_Sortiranje.cpp
// Author      : Ivan Batistic
// Version     : /
// Copyright   : /
// Description : Sortiranje [VJ-8]
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm> // for copy
#include <iterator> // for ostream_iterator
using namespace std;

class Sortiranje {
public:
	virtual void sortiraj(vector<int>* vec) final {
		for (unsigned int i = 0; i < vec->size() - 1; ++i)
			for (unsigned int j = i + 1; j < vec->size(); ++j)
				if (!usporedba((*vec)[i], (*vec)[j])) {
					swap((*vec)[i], (*vec)[j]);
				}
	}
	virtual bool usporedba(int e1, int e2) = 0;

	virtual ~Sortiranje(){};
};

class SortVeciPremaManjem : public Sortiranje {
public:
	bool usporedba(int e1, int e2)
	{
		if (e1 > e2)
			return true;
		return false;
	}
};

class SortManjiPremaVecem : public Sortiranje {
public:
	bool usporedba(int e1, int e2)
	{
		if (e1 < e2)
			return true;
		return false;
	}
};

template <typename T>
std::ostream& operator<< (std::ostream& out, const std::vector<T>& v) {
  if ( !v.empty() ) {
    copy (v.begin(), v.end(), ostream_iterator<T>(out, " "));
    out << endl;
  }
  return out;
}

int main() {
	vector<int> v = { 8, 17, 1, 14, 5, 2, 19, 3, 15, 11 };
	Sortiranje* sort1 = new SortVeciPremaManjem();
	sort1->sortiraj(&v);
	cout << v;
// ispisuje 19 17 15 14 11 8 5 3 2 1
	delete sort1;
	Sortiranje* sort2 = new SortManjiPremaVecem();
	sort2->sortiraj(&v);
	cout << v;
// ispisuje 1 2 3 5 8 11 14 15 17 19
	delete sort2;
	return 0;
}
