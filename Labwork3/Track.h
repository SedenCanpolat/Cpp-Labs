#pragma once
#include <iostream>
using namespace std;

class Track {
private:
	int length;
	double topSpeedPct;
	double highHandlingPct;
	double mediumHandlingPct;
	double cruiseSpeedPct;

public:
	

	Track(int length, double topSpeedPct, double highHandlingPct, double mediumHandlingPct, double cruiseSpeedPct);

	double getLength();
	double getTopSpeed();
	double getHighHandling();
	double getMediumHandling();
	double getCruiseSpeed();

};