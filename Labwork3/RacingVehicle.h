#pragma once
#include <iostream>
using namespace std;
#include "Track.h"

class RacingVehicle {
protected: 
	string vehicleType;
	double topSpeed;
	double handling;
	string manufacturer;
	string model;
	string driverName;
public:

	RacingVehicle(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName);

	void display();
	virtual int race(Track track);
	void tunning(double increaseTopSpeed = 0, double increaseHandling = 0);


};