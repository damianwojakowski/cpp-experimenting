#include <iostream>

// classes
#include "SomePerson.h"
#include "classes/classes_headers.h"
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
    overloadedPerson.setName("Daniel");
    overloadedPerson.info();
    overloadedPerson.printTheNumber();

    OverloadedPerson overloadedPersonNo2(20);
    overloadedPersonNo2.setName("Karol");
    overloadedPersonNo2.info();
    overloadedPersonNo2.printTheNumber();

    cout << overloadedPerson.getName() << " plus " << overloadedPersonNo2.getName() << " equls: ";

    // PLUS OPERATOR
    OverloadedPerson newPerson = overloadedPersonNo2 + overloadedPerson;
    newPerson.info();
    newPerson.printTheNumber();

    // ASSIGNMENT
    OverloadedPerson assignmentObject;
    assignmentObject = newPerson;

    assignmentObject.setName("The Assignment object...");
    assignmentObject.info();
    assignmentObject.printTheNumber();

    // Testing overloaded cout operator
    cout << assignmentObject << endl;

    // Testing non-member overloaded plus operator - int is converted into OverloadedPerson
    cout << "overloadedPersonNo2 + 50 = " << overloadedPersonNo2 + 50 << endl;
    cout << "50 + overloadedPersonNo2 = " << 50 + overloadedPersonNo2 << endl;
}
