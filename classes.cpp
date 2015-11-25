#include <iostream>

// classes
#include "SomePerson.h"
#include "classes/OverloadedPerson.h"

using namespace std;

void info();
void testBasics();
void overloadingOperators();

void classesBasics() {
    info();
    //testBasics();
    overloadingOperators();
}

void info() {
    cout << "### Classes module ###" << endl;
}

void testBasics() {
    cout << "Create object..." << endl;
    SomePerson myType;
    myType.setName("Damian...");
    myType.age = 20;
    myType.showName();
    cout << "his age is: " << myType.age << endl;
}

void overloadingOperators() {
    OverloadedPerson overloadedPerson;
    overloadedPerson.info();
}
