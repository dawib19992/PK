#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ostream>

using namespace std;

class Test {
	int rownomierny;
	double normalny;
public:
	Test()
	{
		random_device gen_los;
		mt19937 gen_plos(gen_los());

		uniform_int_distribution<int> uniDistInt(0, 9);
		normal_distribution<double> uniDistReal(0, 3);

		int randomInt = uniDistInt(gen_plos);
		double randomDouble = uniDistReal(gen_plos);

		rownomierny = randomInt;
		normalny = randomDouble;
	}

	int getRownomierny()
	{
		return rownomierny;
	}
	double getNormalny()
	{
		return normalny;
	}


};

ostream& operator<<(ostream& os, std::vector<Test>& t)
{
	for (auto& w : t)
	{
		os << "(" << w.getRownomierny() << " , " << w.getNormalny()<<")";
	}
	return os;
}

struct funktor {
	bool typ;
public:

	bool operator()(Test& t1, Test& t2) {
		if (typ)
			return t1.getRownomierny() > t2.getRownomierny();
		else if (!typ)
			return t1.getNormalny() > t2.getNormalny();
	}

	void ustawPorownanie(bool typ_)
	{
		typ = typ_;
	}

	bool zwrocTyp() {
		return typ;
	}
};

int main()
{
	Test t1, t2, t3, t4, t5;
	std::vector<Test> wektor;
	wektor.push_back(t1);
	wektor.push_back(t2);
	wektor.push_back(t3);
	wektor.push_back(t4);
	wektor.push_back(t5);

	cout << "Oryginalny wektor:" << endl;

	for (auto& w : wektor)
	{
		cout << w.getRownomierny() << " " << w.getNormalny() << endl;
	}
		
	cout << wektor << endl;

	funktor f;
	f.ustawPorownanie(1); //po intach
	sort(wektor.begin(), wektor.end(), f);

	cout << "Posortowany po intach:" << endl;

	for (auto& w : wektor)
	{
		cout << w.getRownomierny() << " " << w.getNormalny() << endl;
	}

	f.ustawPorownanie(0); //po double
	sort(wektor.begin(), wektor.end(), f);

	cout << "Posortowany po double:" << endl;

	for (auto& w : wektor)
	{
		cout << w.getRownomierny() << " " << w.getNormalny() << endl;
	}

	
}
