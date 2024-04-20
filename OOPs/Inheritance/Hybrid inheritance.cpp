// Problem- 4: Hybrid Inheritance Problem --->

/* Qn: -->
Consider you're developing software for a banking system. Design a class hierarchy for different types of bank accounts. 
Create a base class `Account` with properties like `accountNumber` and `balance`. 
Derive classes `SavingsAccount` and `CurrentAccount` from `Account`, representing different types of accounts. 
Further, derive a class `JointAccount` from both `SavingsAccount` and `CurrentAccount`, representing joint accounts with shared ownership. 
Implement member functions to deposit and withdraw money from the accounts, ensuring proper handling of joint account operations. Test your code with various account operations.

*/

#include<iostream>
using namespace std;

class Account {
protected:
	string accountNumber;
	int balance;

public:
	Account(string accountNumber, int iniBalance) {
		accountNumber = accountNo;
		balance = iniBalance;
	}

	void deposit(int amount) {
		balance = balance + amount;
	}

	void withdraw(int amount) {
		if (balance >= amount) {
			balance = balance - amount;
		}
		else {
			cout << "Insufficient funds" << endl;
		}
	}

	void display() {
		cout << "Account Balance with " << accountNumber << " " << balance << endl;
	}
};

class SavingsAccount : public Account {
public:
	SavingsAccount(string accountNo, int iniBalance) : Account(accountNo, iniBalance) {

	}
	/* "Account(accNumber, initialBalance):" --> This is the constructor initializer list. It initializes the base class Account with the provided parameters.
	    This part of the initializer list calls the constructor of the base class Account. It passes the accNumber and initialBalance parameters to the Account constructor, initializing the base class part of the SavingsAccount object with these values.  */

	/*  However, the line ": Account(accNumber, initialBalance)" is not redeclaring the parameters; rather, it is specifying how the base class constructor should be called during the initialization of the SavingsAccount object.
	    In summary, the line ": Account(accNumber, initialBalance)" is necessary for initializing the base class part of the SavingsAccount object.  */
	void deposit(int amount) override {
		Account:: deposit(amount);
	}

	void withdraw(int amount) override {
		Account:: withdraw(amount);
	}
};

class CurrentAccount : public Account {
public:

	CurrentAccount(string accountNumber, int iniBalance) : Account(accountNo, iniBalance) {

	}

	void deposit(int amount) override {
		Account:: deposit(amount);
	}

	void withdraw(int amount) override {
		Account:: withdraw(amount);
	}
};

class JointAccount : public SavingsAccount, public CurrentAccount {
public:

	JointAccount(string accountNo, int iniBalance) : Account(accountNo, iniBalance) {

	}

	void deposit(int amount) override {
		SavingsAccount :: deposit(amount);
		CurrentAccount :: deposit(amount);
	}

	void withdraw(int amount) override {
		SavingsAccount :: withdraw(amount);
		CurrentAccount :: withdraw(amount);
	}

	void display() override {
		cout << "Joint Account " << accountNumber << "BAlance: " << balance << "And current account balance: " << balance << endl;
	}
};

int main() {
	SavingsAccount savings("SA100", 3124);
	CurrentAccount current("SA200", 7800);
	JointAccount joint("JA677", 1094);

	savings.deposit(60);  // balance = 3124 + 60 = 3184
	savings.display();
	savings.withdraw(100); // balance = 3184 - 100 = 3084
	savings.display();

	current.deposit(199);
	current.display();
	current.withdraw(200);
	current.display();

	joint.deposit(22);
	joint.display();
	joint.withdraw(90);
	joint.display();
}
