/*
 * SomePerson.h
 *
 *  Created on: 25 lis 2015
 *      Author: damian
 */

#ifndef SRC_SOMEPERSON_H_
#define SRC_SOMEPERSON_H_

class SomePerson
{
    char name[80];

public:
    void showName();
    void setName(const char *newName);

    int age;
};

#endif /* SRC_SOMEPERSON_H_ */
