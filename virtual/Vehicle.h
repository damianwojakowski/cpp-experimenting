/*
 * Vehicle.h
 *
 *  Created on: 12 gru 2015
 *      Author: Damian
 */

#ifndef VIRTUAL_VEHICLE_H_
#define VIRTUAL_VEHICLE_H_

namespace Virtual {

class Vehicle {
public:
	Vehicle();
	virtual ~Vehicle();
	virtual void horn() {};
};

} /* namespace Virtual */

#endif /* VIRTUAL_VEHICLE_H_ */
