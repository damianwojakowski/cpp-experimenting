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
    // TODO Auto-generated constructor stub
}

OverloadedPerson::OverloadedPerson(int initTheNumber) : name("Unknown The Second...") {
    this->theNumber = initTheNumber;
}

OverloadedPerson::~OverloadedPerson() {
    // TODO Auto-generated destructor stub
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

OverloadedPerson OverloadedPerson::operator + (const OverloadedPerson & rhs) const {
    int someNumber;
    someNumber = this->theNumber + rhs.getTheNumber();
    return OverloadedPerson(someNumber);
}

OverloadedPerson & OverloadedPerson::operator = (const OverloadedPerson & rhs) {
    cout << "assignment" << endl;

    this->theNumber = rhs.getTheNumber();
}
