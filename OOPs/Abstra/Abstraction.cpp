// Abstraction --> "Implementation hiding" --> showing only essential information

#include<iostream>
using namespace std;

class AbstractEmployee {
public:
	virtual void AskForPromotion() = 0;
};

class Employee :  AbstractEmployee {
private:
	string name;
	string company;
	int age = 78;

public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}

	void setCompany(string company) {
		this->company = company;
	}
	string getCompany() {
		return company;
	}

	void setAge(int age) {
		this->age = age;
	}
	int getAge() {
		return age;
	}

	void IntroduceYourself() {
		cout << name << endl;
		cout << company << endl;
		cout << age << endl;
	}

	Employee(string name, string company, int age) {
		this->name = name;
		this->company = company;
		this->age = age;
	}

	void AskForPromotion() {
		if (age > 30) {
			cout << name << " got promoted" << endl;
		} else {
			cout << name << " no promotion for you! " << endl;
		}

	}
};

int main() {

	Employee employee1("Limon", "OUYH", 89 );
	Employee employee2("Raydds", "OUYH", 12);

	employee1.AskForPromotion();
	employee2.AskForPromotion();
}
