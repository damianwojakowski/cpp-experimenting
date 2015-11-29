#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    string kindOfVehicle;
    string sound;
    int maxSpeed;

    // make it private so it cannot be instantiated (like abstract class)
    Vehicle(){};
protected:
    Vehicle(const string & name, const string & sound, int maxSpeed);
public:
    void turnOnAndGo();
};

Vehicle::Vehicle(const string & name, const string & sound, int maxSpeed) : kindOfVehicle(name), sound(sound), maxSpeed(maxSpeed) {}

void Vehicle::turnOnAndGo() {
    cout << "You're looking at " << this->kindOfVehicle << endl;
    cout << "It's sound is..." << this->sound << endl;
    cout << "It can go " << this->maxSpeed << " km/h" << endl;
}

class Bike : public Vehicle {
public:
    Bike(const string & name) : Vehicle(name, "it's got NO SOUND!", 20) {};
};

class Car : public Vehicle {
public:
    Car(const string & name) : Vehicle(name, "wruummmm", 250) {};
};

class Tank : public Vehicle {
public:
    Tank(const string & name) : Vehicle(name, "very LOUD!", 100) {};
};


void testInheritance() {
    cout << "### TESTING INHERITANCE ###" << endl;

    Bike bike("My super bike");
    bike.turnOnAndGo();

    Car ferrari("Testarossa");
    ferrari.turnOnAndGo();

    Tank leopard("Leopard The Green");
    leopard.turnOnAndGo();
}
