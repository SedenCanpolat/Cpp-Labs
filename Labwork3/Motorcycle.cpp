#include <iostream>
using namespace std;
#include "Motorcycle.h"

Motorcycle::Motorcycle(double aerodynamics, string vehicleType,
	double topSpeed,
	double handling,
	string manufacturer,
	string model,
	string driverName) :RacingVehicle(vehicleType, topSpeed, handling, manufacturer, model, driverName) {
	this->aerodynamics = aerodynamics;
}

int Motorcycle::race(Track track)
{
	double time = 0.0;
	double aeroTopSpeed{};
	aeroTopSpeed = topSpeed / 100 * 20 * aerodynamics + topSpeed;

	time += track.getLength() * track.getTopSpeed()  / topSpeed;

	if (track.getHighHandling() > 0.8) {
		time += track.getLength() * track.getHighHandling() / aeroTopSpeed;
	}
	else {
		time += track.getLength() * track.getHighHandling() / (aeroTopSpeed / 100 * 80);
	}
	if (track.getMediumHandling() > 0.6) {
		time += track.getLength() * track.getMediumHandling() / aeroTopSpeed;
	}
	else {
		time += track.getLength() * track.getMediumHandling() / (aeroTopSpeed / 100 * 90);
	}
	time += track.getLength() * track.getCruiseSpeed() / (topSpeed / 100 * 50);

	cout << "Motorcycle time: " << int(time * 60) << " minutes " << (time * 60 - int(time * 60)) * 60 << " seconds" << endl;

	return time;
}

