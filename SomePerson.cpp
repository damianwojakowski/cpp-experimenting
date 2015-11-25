#include <iostream>
#include <cstring>

#include "SomePerson.h"

using namespace std;

void SomePerson::showName() {
    cout << "My name is: " << this->name << endl;
}

void SomePerson::setName(const char *newName) {
    strcpy(this->name, newName);
}
