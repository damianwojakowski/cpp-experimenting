/*
 * OverloadedPerson.cpp
 *
 *  Created on: 25 lis 2015
 *      Author: damian
 */

#include <iostream>
#include <string>
#include "OverloadedPerson.h"

using namespace std;

OverloadedPerson::OverloadedPerson() : theNumber(10), name("Unknown") {
    cout << "Consructor NO PRARAMS called" << endl;
}

OverloadedPerson::OverloadedPerson(int initTheNumber) : theNumber(initTheNumber), name("Unknown The Second...") {
    cout << "Consructor WITH PRARAMS called" << endl;
}

OverloadedPerson::~OverloadedPerson() {
    cout << "Destructor called" << endl;
}

void OverloadedPerson::info() {
    cout << "Hey, I am " << this->name << endl;
}

void OverloadedPerson::printTheNumber() {
    cout << "The number is: " << this->theNumber << endl;
}

void OverloadedPerson::setName(string name) {
    this->name = name;
}

string OverloadedPerson::getName() {
    return this->name;
}

int OverloadedPerson::getTheNumber() const {
    return this->theNumber;
}

//OverloadedPerson OverloadedPerson::operator + (const OverloadedPerson & rhs) const {
//    int someNumber;
//    someNumber = this->theNumber + rhs.getTheNumber();
//    return OverloadedPerson(someNumber);
//}

OverloadedPerson & OverloadedPerson::operator = (const OverloadedPerson & rhs) {
    cout << "assignment" << endl;

    this->theNumber = rhs.getTheNumber();

    return *this;
}

OverloadedPerson::operator std::string () const {
    return string(this->name);
}
