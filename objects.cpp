/*
 * objects.cpp
 *
 *  Created on: 9 lis 2015
 *      Author: damian
 */

#include <iostream>

using namespace std;

class Class1 {
    int i;
    int y;
public:
    Class1();
    void setValue(int value);
    int getValue() const;
    int getValue();
    int getY();
    void lookAtThis(int i);
};

Class1::Class1() : i(130), y(200) {
    cout << "Default constructor" << endl;
}

void Class1::setValue(int value) {
    i = value;
}

int Class1::getValue() {
    cout << "mutable getValue()" << endl;
    return i;
}

int Class1::getY() {
    return y;
}

int Class1::getValue() const {
    cout << "const safe getValue()" << endl;
    return i;
}

void Class1::lookAtThis(int i) {
    cout << "i is: " << i << endl;
    cout << "object i is: " << this->i << endl;
}

void testObjects() {
    Class1 firstObject;

    cout << "firstObject's variable before setting new value: " << firstObject.getValue() << endl;

    firstObject.setValue(10);

    Class1 secondObject = firstObject;
    const Class1 thirdObject = secondObject;


    cout << "firstObject's variable is: " << firstObject.getValue() << endl;
    cout << "secondObject's variable is: " << secondObject.getValue() << endl;
    cout << "thirdObject's variable is: " << thirdObject.getValue() << endl;

    cout << "thirdObject's variable Y is: " << firstObject.getY() << endl;

    firstObject.lookAtThis(33);
}
