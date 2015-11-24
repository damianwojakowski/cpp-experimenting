/*
 * functions.cpp
 *
 *  Created on: 8 lis 2015
 *      Author: damian
 */

#include <iostream>
#include <stdio.h>

using namespace std;

void changeValue(int &value);

void functions() {
    int x = 44;
    printf("x is %d\n", x);

    changeValue(x);

    printf("Now x is %d\n", x);
}

void changeValue(int &value) {
    value = 55;

    cout << "the value is: " << value << endl;
}

