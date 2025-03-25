#include <iostream>
using namespace std;
#include <string>

#ifndef PLANET_H
#define PLANET_H

class Planet {
private:
	string name;
	double distanceFromSun;
	double diameter;

	/*
	Planet(string name = "unknown", double distanceFromSun = 0.0, double diameter = 0.0)
		: name(name), distanceFromSun(distanceFromSun), diameter(diameter){}
	*/

public:
	Planet(string name = "unknown", double distance = 0.0, double dm = 0.0) {
		this->name = name;
		this->distanceFromSun = distance;
		this->diameter = dm;
	}
	
	string getName();
	double getDistance();
	double getDm();

	double distanceTo(const Planet& destination);


};

#endif