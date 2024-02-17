// (4)  -->

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
