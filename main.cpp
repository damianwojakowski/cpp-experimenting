//============================================================================
// Name        : main.cpp
// Author      : Damian Wojakowski
// Version     :
// Copyright   : GNU
// Description : Testing C++
//============================================================================

#include <iostream>
#include <vector>
#include <stdio.h>
#include "headers.h"

using namespace std;

void lotsOfTinyTests();
inline double dziel(double a, double b);

int main() {
    //lotsOfTinyTests();
    //testObjects();
    //classesBasics();
    //testExceptions();
    //testInheritance();
    //testTemplates();
    //testVirtualFunctions();

    checkCppString();

    return 0;
}

void lotsOfTinyTests() {
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
}

inline double dziel(double a, double b) {
    return (a / b);
}

void someCFunctions() {
    printf("Hello, World from C\n");

    char s[] = "Some string";

    for (char* cp = s; *cp; cp++) {
        printf("char is %c\n", *cp);
    }

}
