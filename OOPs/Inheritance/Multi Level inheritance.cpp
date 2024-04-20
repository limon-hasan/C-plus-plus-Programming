// Assignment Problem- 2: Multilevel Inheritance Problem --->

#include <iostream>
using namespace std;

class Vehicle {

protected:
	string fuelType = "Disel";
	int capacity = 100;

public:
};

class Car : public Vehicle {

protected:
	int numSeats = 30;
};

class Sedan : public Car {

protected:
	int bootSpace = 500;

public:
	void display() {
		cout << "Fuel type: " << fuelType << endl;
		cout << "Capacity: " << capacity << endl;
		cout << "Number of seats: " << numSeats << endl;
		cout << "Extra boot space for Sedan: " << bootSpace << endl;
	}
};

int main() {
	Sedan s3;
	s3.display();
}



// ============================================================================



// Or : -->

#include <iostream>
using namespace std;

class Vehicle {

protected:
	string fuelType = "Disel";
	int capacity = 100;

public:
	virtual void displayDetails() {
		cout << "Fuel Type: " << fuelType << endl;
		cout << "Capacity: " << capacity << endl;
	}
};

class Car : public Vehicle {

protected:
	int numSeats = 30;
public:
	void displayDetails() override {
		Vehicle:: displayDetails();
		cout << "Number of seats: " << numSeats << endl;
	}
};

class Sedan : public Car {

private:
	int bootSpace = 500;

public:
	void displayDetails() override {
		Car:: displayDetails();
		cout << "Extra boot space for Sedan: " << bootSpace << endl;
	}
};

int main() {
	Vehicle v1;
	Car c2;
	Sedan s3;

	cout << "Vehicle Details: " << endl;
	v1.displayDetails();
	cout << endl;

	cout << "Car details :" << endl;
	c2.displayDetails();
	cout << endl;

	cout << "Sedan details: " << endl;
	s3.displayDetails();
	cout << endl;
}
