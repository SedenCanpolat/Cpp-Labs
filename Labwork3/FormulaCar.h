#pragma once
#include <iostream>
using namespace std;
#include "RacingVehicle.h"

class FormulaCar : public RacingVehicle {
protected:
	double aerodynamics;
public:
	FormulaCar(double aerodynamics,string vehicleType,
		double topSpeed,
		double handling,
		string manufacturer,
		string model,
		string driverName);
	int race(Track track) override;

};
