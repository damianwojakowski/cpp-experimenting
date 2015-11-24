#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char name[80];

public:
    void showName();
    void setName(const char *newName);

    int age;
};

void Person::showName() {
    cout << "My name is: " << this->name << endl;
}

void Person::setName(const char *newName) {
    strcpy(this->name, newName);
}

void testBasics() {
    cout << "Create object..." << endl;
    Person myType;
    myType.setName("Damian...");
    myType.age = 20;
    myType.showName();
    cout << "his age is: " << myType.age << endl;
}

void classesBasics() {
    testBasics();
}
