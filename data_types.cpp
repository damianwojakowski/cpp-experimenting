/*
 * data_types.cpp
 *
 *  Created on: 8 lis 2015
 *      Author: damian
 */

#include <iostream>
#include <stdint.h>
#include <typeinfo>
#include <vector>
#include <stdio.h>

using namespace std;

void iterateOverStringWithIterator(string &my_string);
void iterateWithNewForLoop(const string &cppString);
void showBacisInfo(string &some_string) ;
void references();
int & changeReferenceValue(int & someValue);
void workWithStructs();
void structsWithMethods();
void f_enums();
void f_unions();
void f_auto();
void f_auto_with_vector();

string cppString = "This is a c++ string";

void checkCppString() {
    //showBacisInfo(cppString);
    //iterateWithNewForLoop(cppString);
    //iterateOverStringWithIterator(cppString);
    //references();
    //workWithStructs();
    structsWithMethods();
    //f_enums();
    //f_unions();
    //f_auto();
    //f_auto_with_vector();
}

void showBacisInfo(string &some_string) {
    cout << some_string << endl;
    cout << "The size is: " << some_string.size() << endl;
}

void iterateWithNewForLoop(const string &cppString) {
    cout << "Print each letter in new line:" << endl;
    for (char c : cppString) {
        cout << c << endl;
    }
}

void iterateOverStringWithIterator(string &my_string) {
    cout << "displaying letters with string's iterator" << endl;
    for (auto it = my_string.begin(); it != my_string.end(); it++) {
        cout << "The letter is: " << *it << endl;
    }
}

void references() {
    int someValue = 10;

    cout << "the value of someValue is: " << someValue << endl;

    cout << "creating a reference to someValue and changing it's value"
            " via reference..." << endl;
    int & someReference = someValue;
    someReference = 20;

    changeReferenceValue(someValue) = 42;

    cout << "the value of someValue is: " << someValue << endl;
}

int & changeReferenceValue(int & someValue) {
    return ++someValue;
}

void workWithStructs() {

    struct employee {
        int id;
        const char * name;
        const char * surname;
    };

    struct employee joe = {10, "Joe", "Wojakowski"};
    struct employee * ep = &joe;

    printf("Emplyee id is %d, his name is %s, his surname is %s\n",
            joe.id, joe.name, joe.surname);

    printf("Emplyee id is %d, his name is %s, his surname is %s\n",
                ep->id, ep->name, ep->surname);

    struct preferences {
        bool likesBananas;
        unsigned int childrenInRoom;
    };

    struct preferences my_preferences;

    my_preferences.childrenInRoom = 10;
    my_preferences.likesBananas = false;

    cout << "Display my preferences:" << endl;
    cout << "Children in room: " << my_preferences.childrenInRoom << endl;

    my_preferences.childrenInRoom = 20;

    cout << "Children in room: " << my_preferences.childrenInRoom << endl;
}

void structsWithMethods() {
    cout << "Structs with methods" << endl;

    struct StructWithMethod {
        string helloText;
        void sayText() { cout << helloText << endl; }
    };

    StructWithMethod myStructWithText;
    myStructWithText.helloText = "A method have just been called from inside of a struct, hello!";

    myStructWithText.sayText();
}

void f_enums() {
    enum cards {ONE, TWO, THREE};

    cards someCard = TWO;

    switch (someCard) {
    case ONE:
        cout << "You've picked ONE" << endl;
        break;
    case TWO:
        cout << "You've picked TWO" << endl;
        break;
    case THREE:
        cout << "You've picked THREE" << endl;
        break;
    default:
        cout << "You've picked something different" << endl;
        break;
    }
}

void f_unions() {

    union ipv4 {
        struct {
            uint8_t a;
            uint8_t b;
            uint8_t c;
            uint8_t d;
        } bytes;
        uint32_t full_address;
    };

    union ipv4 address;
    address.bytes = {120, 22, 44, 0};

    printf("%d.%d.%d.%d \n", address.bytes.a, address.bytes.b, address.bytes.c, address.bytes.d);

    cout << "The union full_address is: " << address.full_address << endl;
}

string returnInteger() {
    return "Hello...";
}

void f_auto() {
    auto autoValue = returnInteger();
    cout << autoValue << endl;

    cout << typeid(autoValue).name() << endl;
}

void f_auto_with_vector() {
    vector<int> i = {1, 2, 3, 4, 5};

    for (vector<int>::iterator it = i.begin(); it != i.end(); ++it) {
        cout << *it << endl;
    }

    cout << endl << "Improved iterator with auto: " << endl;
    for (auto it = i.begin(); it != i.end(); ++it) {
        cout << *it << endl;
    }
}

