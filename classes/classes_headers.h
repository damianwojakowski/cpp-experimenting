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

#endif /* SRC_CLASSES_CLASSES_HEADERS_H_ */
