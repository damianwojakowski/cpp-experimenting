/*
 * preprocesor.cpp
 *
 *  Created on: 7 lis 2015
 *      Author: damian
 */

#include <iostream>
#define FOUR 4
#define TWO 2
#define SUM (getTwo() + getFour())

#define NNN 10
#define MISSION(number) Apollo_ ## number
#define Apollo_12 "Apollo 12 text..."

#define DZIEL(a,b) ((a)/b)
#define VNAME(x) #x

#define DECEMBER_2015 1
#define SEPTEMBER_2014 2

#define EXPERIMENT_VERSION DECEMBER_2015

int getTwo() {
    return TWO;
}

int getFour() {
    return FOUR;
}

void displayNumberDefinedByPreprocesor() {
    std::cout << FOUR << std::endl;
}

void displaySum() {
    std::cout << SUM << std::endl;
}

void displayNNN() {
    std::cout << NNN;
}

void displayDZIELMacro() {
    std::cout << DZIEL(2+3, 5.0);
}

void displayMission() {
    std::cout << MISSION(12);
}

void displayProgramInformation(int value2) {
    std::cout << "Line no " << __LINE__
            << ", value of \"" << VNAME(value2)
            << "\" = "
            << value2;
}

void runExperiment() {
    #if (EXPERIMENT_VERSION == 1)
        std::cout << "Experiment no 1";
    #elif (EXPERIMENT_VERSION == 2)
        std::cout << "Experiment no 2";
    #else
        #error "You haven't picked the experiment version!"
    #endif
}
