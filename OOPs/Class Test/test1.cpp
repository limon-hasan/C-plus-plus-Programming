// create a class that contains total balance and then cashout, cash in and print them

#include <bits/stdc++.h>
using namespace std;

class Nkash {
	private:
	int Balance;
	public:
	void setBalance(int x) {
		Balance = x;
	}
	int getBalance() {
		return Balance;
	}

	void cashOut(int y) {
		Balance = Balance - y;
		cout << "Cashout = " << y << endl;
	}
	void cashIn(int z) {
		Balance = Balance + z;
		cout << "Cash In = " << z << endl;
	}
	void balance() {
		cout <<  "Total Balance = " << Balance << endl; 
	}
};
 
int main() {
	Nkash p1;
	p1.setBalance(5000);
	cout <<"Total Balance = " << p1.getBalance() << endl;
	p1.cashOut(1000);
	p1.cashIn(500);
	p1.balance();
}
