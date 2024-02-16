// (2) -->
#include <bits/stdc++.h>
using namespace std;

class Account {
    public:
    int accountNumber;
    string accountHolder;
    int balance;

    Account(int accountNo2, string accountH2, int blnc2) {
        accountNumber = accountNo2;
        accountHolder = accountH2;
        balance = blnc2;
        cout << "Account 2 created with balance " << balance << endl;
    }

    Account(int accountNo1, string accountH1) {
        accountNumber = accountNo1;
        accountHolder = accountH1;
        balance = 0;
        cout << "Accoutn 1 created with balance " << balance << endl;
    }

    void deposit(int amount) {
        balance = balance + amount;
        cout <<"Deposit 1: " << amount << ". " << "New Balance: " << balance << endl;
    }

    void withdrawal(int amount) {
        balance = balance - amount;
        cout <<"Withdrawal 1: " << amount << ". " << "New Balance: " << balance;
    }
};


int main() {
    Account a1(1001, "Alice");
    Account a2(1002, "Bob", 5000);
    a1.deposit(1500);
    a1.withdrawal(800);

    return 0;
}



// --------------------------------------------------------------------------------------------


// Or -->
#include <bits/stdc++.h>
using namespace std;

class Account {
    public:
    int accountNumber;
    string accountHolder;
    int balance;

    Account(int accountNo2, string accountH2, int blnc2) {
        accountNumber = accountNo2;
        accountHolder = accountH2;
        balance = blnc2;
        cout << "Account 2 created with balance " << balance << endl;

    }

    Account(int accountNo1, string accountH1) {
        accountNumber = accountNo1;
        accountHolder = accountH1;
        cout << "Account 1 created with balance ";
    }

    void deposit(int y) {
        cout << "Deposit 1: "<< y<< ". " << "New Balance: " << y << endl;
    }

    void withdrawal(int z) {
        cout <<"Withdrawal 1: " << z << ". " << "New Balance: ";
    }
};


int main() {
    Account a1(1001, "Alice");
    a1.balance = 0;
    cout << a1.balance << endl;
    Account a2(1002, "Bob", 5000);
    a1.deposit(1500);
    a1.withdrawal(800);
    a1.balance = a1.balance + 700;
    cout << a1.balance << endl;

    return 0;
}
