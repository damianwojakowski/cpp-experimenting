/*
 * pointers.cpp
 *
 *  Created on: 8 lis 2015
 *      Author: damian
 */

#include <iostream>

using namespace std;

void playWithPointers();
void functionPointer();

void myFirstPointer() {
    //playWithPointers();
    functionPointer();
}

void playWithPointers() {
    int someInteger = 10;
    void* voidPointer;
    int* my_pointer;
    my_pointer = &someInteger;
    cout << *my_pointer << endl;
    *my_pointer = 20;
    cout << someInteger << endl;
    voidPointer = my_pointer;
    //*voidPointer = 500;
    cout << voidPointer << endl;
    cout << my_pointer << endl;
}

int someFunction(int i) {
    i++;
    cout << "this is someFunction()" << endl;
    return i;
}

void functionPointer() {
    int result;

    int (*funcPointer) (int);
    funcPointer = &someFunction;

    result = (*funcPointer)(42);

    cout << "The result is: " << result << endl;
}
