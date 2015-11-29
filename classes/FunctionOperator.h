/*
 * FunctionOperator.h
 *
 *  Created on: 29 lis 2015
 *      Author: damian
 */

#ifndef SRC_CLASSES_FUNCTIONOPERATOR_H_
#define SRC_CLASSES_FUNCTIONOPERATOR_H_

namespace overloaded {

class FunctionOperator {
    int multiplayer;
public:
    FunctionOperator(int initValue) : multiplayer(initValue) {};
    int operator () (int someValue) { return multiplayer * someValue; };
};

} /* namespace overloaded */

#endif /* SRC_CLASSES_FUNCTIONOPERATOR_H_ */
