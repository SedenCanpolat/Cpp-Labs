#pragma once
#include <iostream>
using namespace std;
#include "RacingVehicle.h"


class Motorcycle : public RacingVehicle {
protected:
	double aerodynamics;
public:
	Motorcycle(double aerodynamics, string vehicleType,
		double topSpeed,
		double handling,
		string manufacturer,
		string model,
		string driverName);
	int race(Track track) override;

};