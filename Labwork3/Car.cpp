#include <iostream>
using namespace std;
#include "Car.h"
#include <string>

Car::Car(double aerodynamics, string vehicleType,
	double topSpeed,
	double handling,
	string manufacturer,
	string model,
	string driverName):RacingVehicle(vehicleType, topSpeed, handling, manufacturer, model, driverName){
	this->aerodynamics = aerodynamics;
}

int Car::race(Track track)
{
	double time = 0.0;
	double aeroTopSpeed{};
	aeroTopSpeed  = topSpeed / 100 * 10 * aerodynamics + topSpeed;

	time += track.getLength() * track.getTopSpeed() / aeroTopSpeed;

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

	cout << "Car time: " << int(time * 60) << " minutes " << ( time * 60 - int(time * 60) ) * 60 << " seconds" << endl;

	return time;
}
