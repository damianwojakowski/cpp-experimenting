#include <iostream>

// classes
#include "SomePerson.h"
#include "classes/classes_headers.h"
#include "classes/OverloadedPerson.h"
#include "classes/FunctionOperator.h"

using namespace std;

void info();
void testBasics();
void overloadingOperators();
void conversionOperator();
void standardOperators();
void functionOperator();

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
    //standardOperators();
    //conversionOperator();
    functionOperator();
}

void standardOperators() {
    OverloadedPerson overloadedPerson;
    overloadedPerson.setName("Daniel");
    overloadedPerson.info();
    overloadedPerson.printTheNumber();

    OverloadedPerson overloadedPersonNo2(20);
    overloadedPersonNo2.setName("Karol");
    overloadedPersonNo2.info();
    overloadedPersonNo2.printTheNumber();
    cout << overloadedPerson.getName() << " plus "
            << overloadedPersonNo2.getName() << " equls: ";

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

void conversionOperator() {
    OverloadedPerson overloadedPerson;
    overloadedPerson.setName("Damian");

    string s = "OberloadedPerson as a string: ";
    s += overloadedPerson;
    cout << s << endl;
}

void functionOperator() {
    overloaded::FunctionOperator multiplayerBy10(10);
    overloaded::FunctionOperator multiplayerBy77(77);

    cout << 10 << " multiplayed by 10 equals: " << multiplayerBy10(10) << endl;
    cout << 20 << " multiplayed by 77 equals: " << multiplayerBy77(20) << endl;
    cout << 55 << " multiplayed by 77 equals: " << multiplayerBy77(55) << endl;
}
