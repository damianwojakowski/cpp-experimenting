/*
 * OverloadedPerson.h
 *
 *  Created on: 25 lis 2015
 *      Author: damian
 */

#ifndef SRC_CLASSES_OVERLOADEDPERSON_H_
#define SRC_CLASSES_OVERLOADEDPERSON_H_

#include <string>

using namespace std;

class OverloadedPerson {
public:
    OverloadedPerson();
    OverloadedPerson(int initTheNumber);
    virtual ~OverloadedPerson();
    void info();
    void printTheNumber();
    void setName(string name);
    string getName();
    int getTheNumber() const;
    //OverloadedPerson operator + (const OverloadedPerson & rhs) const;
    OverloadedPerson & operator = (const OverloadedPerson & rhs);

    // conversion operator overloading
    operator std::string () const;
private:
    int theNumber;
    string name;
};

#endif /* SRC_CLASSES_OVERLOADEDPERSON_H_ */
