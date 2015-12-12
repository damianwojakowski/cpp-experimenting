/*
 * Car.h
 *
 *  Created on: 12 gru 2015
 *      Author: Damian
 */

#ifndef VIRTUAL_CAR_H_
#define VIRTUAL_CAR_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;

namespace Virtual {

class Car : public Vehicle {
public:
	Car();
	virtual ~Car();
	void horn() { cout << "Hoorrrrrnnn....." << endl; }
};

} /* namespace Virtual */

#endif /* VIRTUAL_CAR_H_ */
