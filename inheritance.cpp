#include <iostream>
#include <string>

using namespace std;

void basicInheritance();
void testFriendFunction();
void testCallingParentClassMethods();
void multipleInheritanceAndOverridingParentMemberFunction();
void overloadingMethodsViaPointersWithVirutalKeyword();

class Vehicle {
    string kindOfVehicle;
    string sound;
    int maxSpeed;

    // make it private so it cannot be instantiated (like abstract class)
    Vehicle(){};
    Vehicle(const string & name, const string & sound, int maxSpeed);

    // these classes can use Vehicle's private members
    friend class Bike;
    friend class Car;
    friend class Tank;

    // this function can use Vehicle's private members
    friend void testFriendFunction();
public:
    // you need virutal keyword so the method could be overrided when calling it via pointer
    virtual void turnOnAndGo();
    void makeSound() { cout << "making sound..."; };

    // you need virutal destructor when you have virutal members
    virtual ~Vehicle();
};

Vehicle::Vehicle(const string & name, const string & sound, int maxSpeed) : kindOfVehicle(name), sound(sound), maxSpeed(maxSpeed) {
    cout << "----- Vehicle created -----" << endl;
}

Vehicle::~Vehicle() {
    cout << "----- Vehicle destroyed -----" << endl;
}

void Vehicle::turnOnAndGo() {
    cout << "You're looking at " << this->kindOfVehicle << endl;
    cout << "It's sound is..." << this->sound << endl;
    cout << "It can go " << this->maxSpeed << " km/h" << endl;
}

class Canon {
    string caliber;
    Canon() {};
protected:
    Canon(const string & caliber) : caliber(caliber) {};
    void canon() { cout << "It has a cannon of caliber " << caliber << endl; };

};

class Bike : public Vehicle {
public:
    Bike(const string & name) : Vehicle(name, "it's got NO SOUND!", 20) {};
    void callParent() { Vehicle::makeSound(); };
};

class Car : public Vehicle {
public:
    Car(const string & name) : Vehicle(name, "wruummmm", 250) {};
};

class Tank : public Vehicle, public Canon {
public:
    Tank(const string & name) : Vehicle(name, "very LOUD!", 100), Canon("50 CAL") {};
    void turnOnAndGo();
};

void Tank::turnOnAndGo() {
    Vehicle::turnOnAndGo();
    Canon::canon();
}


void testInheritance() {
    cout << "### TESTING INHERITANCE ###" << endl;

    //basicInheritance();
    //testFriendFunction();
    //testCallingParentClassMethods();
    //multipleInheritanceAndOverridingParentMemberFunction();
    overloadingMethodsViaPointersWithVirutalKeyword();
}

void basicInheritance() {
    Bike bike("My super bike");
    bike.turnOnAndGo();

    Car ferrari("Testarossa");
    ferrari.turnOnAndGo();

    Tank leopard("Leopard The Green");
    leopard.turnOnAndGo();
}

void testFriendFunction() {
    Vehicle myVehicle("Super Vehicle", "Wzzzzzz", 400);
    myVehicle.turnOnAndGo();
}

void testCallingParentClassMethods() {
    cout << endl << "# Calling parent's class methods" << endl;
    Bike bike("My Bike");
    bike.callParent();
}

void multipleInheritanceAndOverridingParentMemberFunction() {
    cout << endl << "# Multiple inheritance and simple overloading of methods" << endl;

    Tank myTank("My Super Tank");
    myTank.turnOnAndGo();
}

void overloadingMethodsViaPointersWithVirutalKeyword() {
    cout << endl << "# Overloading methods with virutal keyword" << endl << endl;

    Bike bike("My super bike");
    bike.turnOnAndGo();

    Car ferrari("Testarossa");
    ferrari.turnOnAndGo();

    Tank leopard("Leopard The Green");
    leopard.turnOnAndGo();

    Vehicle *vehicles[] = {&bike, &ferrari, &leopard, nullptr};

    for (int i = 0; vehicles[i]; i++) {
        vehicles[i]->turnOnAndGo();
    }
}
