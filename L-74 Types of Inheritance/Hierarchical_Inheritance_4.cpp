#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    int seats;

    void showCarDetails() {
        cout << "This car has " << seats << " seats." << endl;
    }
};

// Derived class 2
class Bike : public Vehicle {
public:
    int cc;

    void showBikeDetails() {
        cout << "This bike has " << cc << " cc engine." << endl;
    }
};

// Derived class 3
class Truck : public Vehicle {
public:
    int loadCapacity;

    void showTruckDetails() {
        cout << "This truck can carry " << loadCapacity << " tons." << endl;
    }
};

int main() {
    Car c;
    c.brand = "Toyota";
    c.seats = 5;
    c.showBrand();
    c.showCarDetails();

    cout << endl;

    Bike b;
    b.brand = "Yamaha";
    b.cc = 150;
    b.showBrand();
    b.showBikeDetails();

    cout << endl;

    Truck t;
    t.brand = "Volvo";
    t.loadCapacity = 20;
    t.showBrand();
    t.showTruckDetails();

    return 0;
}
