/*
 * classes_headers.h
 *
 *  Created on: 29 lis 2015
 *      Author: damian
 */

#ifndef SRC_CLASSES_CLASSES_HEADERS_H_
#define SRC_CLASSES_CLASSES_HEADERS_H_

#include <iostream>
#include "OverloadedPerson.h"

std::ostream & operator << (std::ostream & o, const OverloadedPerson & r) {
    return o << "The number is: " << r.getTheNumber();
}

OverloadedPerson operator + (const OverloadedPerson & lhs, const OverloadedPerson & rhs) {
    return OverloadedPerson(lhs.getTheNumber() + rhs.getTheNumber());
}

#endif /* SRC_CLASSES_CLASSES_HEADERS_H_ */
