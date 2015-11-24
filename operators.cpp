/*
 * operators.cpp
 *
 *  Created on: 8 lis 2015
 *      Author: damian
 */

#include <iostream>
#include <typeinfo>

using namespace std;

struct A {
    int a;
    int b;
};

struct B {
    int a;
    int b;
};

void run_operators() {
    struct A a1;
    struct A a2;
    struct B b1;
    struct B b2;

    a1 = {10, 20};

    if (typeid(a1) == typeid(b1)) {
        cout << "same" << endl;
    } else {
        cout << "different" << endl;
    }

    cout << "type of a1 is: " << typeid(a1).name();
}


