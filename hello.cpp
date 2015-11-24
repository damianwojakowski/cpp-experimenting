/*
 * hello.cpp
 *
 *  Created on: 5 lis 2015
 *      Author: damian
 */

#include <iostream>

void sayHello() {
    std::cout << "Hello 1";
}

void decimalToBinary(int decimalNumber) {

    static int counter = 0;

    int binNumber = decimalNumber % 2;

    if (decimalNumber > 1) {
        decimalToBinary(decimalNumber / 2);
    }

    if ((counter > 3) && (counter % 4) == 0) {
        std::cout << " ";
    }
    std::cout << binNumber;

    counter++;
}
