//============================================================================
// Name        : main.cpp
// Author      : Damian Wojakowski
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

#include "headers.h"

inline double dziel(double a, double b);

int main() {
    //sayHello();
    //decimalToBinary(33000);
    //displayNumberDefinedByPreprocesor();
    //displaySum();
    //displayNNN();
    //displayDZIELMacro();
    //cout << dziel(20.30, 4.50);
    //displayMission();
    //displayProgramInformation(15);
    //runExperiment();
    //initializeArray();
    //playingWithArrays();
    //changeArrayValueInAnotherFunction();
    //saveStringsIntoArrays();
    //twoDimensinalArray();
    //myFirstPointer();
    //someCFunctions();
    //functions();
    //checkCppString();
    //run_operators();
    // testObjects();
    classesBasics();

    return 0;
}

inline double dziel(double a, double b) {
    return (a / b);
}

void someCFunctions() {
    printf("Hello, World from C\n");

    char s[] = "Some string";

    for (char * cp = s; *cp; cp++) {
        printf("char is %c\n", *cp);
    }

}
