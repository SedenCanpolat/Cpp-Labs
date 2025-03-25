#include <iostream>
using namespace std;
#include "RacingVehicle.h"
#include <string>

RacingVehicle::RacingVehicle(string vehicleType,
	double topSpeed,
	double handling,
	string manufacturer,
	string model,
	string driverName) {
	this->vehicleType = vehicleType;
	this->topSpeed = topSpeed;
	this->handling = handling;
	this->manufacturer = manufacturer;
	this->model = model;
	this->driverName = driverName;
}


void RacingVehicle::display()
{
	cout << "Vehicle type: " << vehicleType << endl <<
			"Top speed: " << topSpeed << endl <<
			"Handling: " << handling << endl <<
			"Manufacturer: " << manufacturer << endl <<
			"Model: " << model << endl <<
			"Driver name: " << driverName << endl;

}

int RacingVehicle::race(Track track) 
{
	int time = 0;

	time += track.getLength() / topSpeed;

	if (track.getHighHandling() > 0.8) {
	   time += track.getLength() * track.getHighHandling() / topSpeed;
	}
	else {
		time += track.getLength() * track.getHighHandling() / (topSpeed / 100 * 80);
	}
	if (track.getMediumHandling() > 0.6) {
		time += track.getLength() * track.getMediumHandling() / topSpeed;
	}
	else {
		time += track.getLength() * track.getMediumHandling() / (topSpeed / 100 * 90);
	}

	time += track.getLength() * track.getCruiseSpeed() / (topSpeed / 100 * 50);
	
	cout << "Time: " << int(time * 60) << " minutes " << (time * 60 - int(time * 60)) * 60 << " seconds" << endl;
	
	return time;
	
}

void RacingVehicle::tunning(double increaseTopSpeed, double increaseHandling)
{
	topSpeed += increaseTopSpeed;
	handling += increaseHandling;
}

