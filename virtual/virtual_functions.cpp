#include <iostream>
#include "Car.h"

using namespace std;

void testVirtualFunctions() {
	cout << "# Virtual Functions" << endl;

	Virtual::Vehicle* someVehicle = new Virtual::Car;
	someVehicle->horn();
}
