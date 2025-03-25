#include <iostream>
using namespace std;
#include "Planet.h"


string Planet::getName() {
	return name;
}

double Planet::getDistance() {
	return distanceFromSun;
}

double Planet::getDm() {
	return diameter;
}

double Planet::distanceTo(const Planet& destination) {
	 double distance = (distanceFromSun + diameter/2) - (destination.distanceFromSun + destination.diameter/2);
	 return abs(distance);

}