#include <iostream>
using namespace std;
#include "Planet.h"

class Spaceship{
private:
	string name;
	double fuel;
	Planet* currentLocation;
public:
	Spaceship(string name, double fuel) {
		this->name = name;
		this->fuel = fuel;
		
		currentLocation = NULL;

	}

	string getName();
	double getFuel();
	Planet* getCurrentLocation();

	void travel(Planet& destination, double fuelPerDistance);
	void displayInfo() ;

};
