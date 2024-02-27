#include <iostream>
using namespace std;

class Moneybag {
public:
	int total = 0;

	void printDetails() {
		cout << "TotaL : " << total << endl;
	}
};

class Salami : public Moneybag {
public:
	int Extra;
	void given() {
		total -= 100;
	}

	void taken() {
		total += 100;
	}
};

class Tour : public Moneybag {
public:
	int cost = 500;
	void costt() {
		cost -= 100;
		total -= 100;
	}
};

int main() {

	Tour t;
	t.costt();
	Salami s;
	s.given();
	s.taken();
	s.printDetails();
	t.printDetails();
}

/* Output : -->
TotaL : 0  [As we didnot initialize the value of "total" so the compiler shows the value of "total" is 0 as garbage value or we assume it as 0
TotaL : -100
*/
