#pragma once
#include <iostream>
using namespace std;
#include "RacingVehicle.h"

class Car : public RacingVehicle {
protected:
	double aerodynamics;
public:
	Car(double aerodynamics, string vehicleType,
		double topSpeed,
		double handling,
		string manufacturer,
		string model,
		string driverName);
	int race(Track track) override;

};
