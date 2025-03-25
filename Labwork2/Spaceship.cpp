#include <iostream>
#include "Spaceship.h"
using namespace std;



string Spaceship::getName()
{
	return name;
}

double Spaceship::getFuel()
{
	return fuel;
}

Planet* Spaceship::getCurrentLocation()
{
	return currentLocation;
}

void Spaceship::travel(Planet& destination, double fuelPerDistance) {
	if(currentLocation != NULL){
	double requiredfuel = getCurrentLocation()->distanceTo(destination) * fuelPerDistance;
	if (requiredfuel <= fuel) {
		fuel = fuel - requiredfuel;
		currentLocation = &destination;
	}
	else {
		cout << "There is not enough fuel " << endl;
	}

   }
	else {
		currentLocation = &destination;
	}
}

void Spaceship::displayInfo() {
	cout << "Name of the spaceship: " << name << endl
		<< "Fuel: " << fuel << endl;
	if (currentLocation != NULL) {
		cout << "Current location: " << currentLocation->getName() << endl;
	}
		

}
