// (4)  -->

/*
 Qn : ->
 Problem 4: Car Rental System
Create a class `Car` with attributes `model`, `make`, and `rentalFee`. Implement a parameterized constructor to initialize these attributes. 
Overload the constructor to handle bothwith and without rental fee cases. Create a method to display the details of the car, including the rental fee.
Sample Input:
Car 1: Model - "Sedan", Make - "Toyota"
Car 2: Model - "SUV", Make - "Ford", Rental Fee - 50
*/

#include <bits/stdc++.h>
using namespace std;

class Car {
    public:
    string model;
    string make;
    int rentalFee;

    Car(string model, string make, int rentalFee) {
        this->model = model;
        this->make = make;
        this->rentalFee = rentalFee;
        cout << "Car 2 created with rental fee " << rentalFee <<". ";

    }

    Car(string model, string make) {
        this->model = model;
        this->make = make;
        cout << "Car 1 created with no rental fee" << endl;
    }

    void detail() {
        cout << "Rental Fee: " << rentalFee << endl;
    }
    
};


int main() {
    Car c1("Sedan", "Toyota");
    Car c2("SUV", "Ford", 50);
    c2.detail();

    return 0;
}

/*
Sample Output:
Car 1 created with no rental fee.
Car 2 created with rental fee 50. Rental Fee: 50.
    */
