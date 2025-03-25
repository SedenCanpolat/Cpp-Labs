#include <iostream>
using namespace std;
#include "Track.h"

Track::Track(int length,
	double topSpeedPct,
	double highHandlingPct,
	double mediumHandlingPct,
	double cruiseSpeedPct) {

	this->length = length;
	this->topSpeedPct = topSpeedPct;
	this->highHandlingPct = highHandlingPct;
	this->mediumHandlingPct = mediumHandlingPct;
	this->cruiseSpeedPct = cruiseSpeedPct;

	double exc = topSpeedPct + highHandlingPct + mediumHandlingPct + cruiseSpeedPct;
	double tolerance = 0.0001;
	if (abs(exc - 1) > tolerance) {
		throw std::invalid_argument("exception");
	}

}


double Track::getLength()
{
	return length;
}

double Track::getTopSpeed()
{
	return topSpeedPct;
}

double Track::getHighHandling()
{
	return highHandlingPct;
}

double Track::getMediumHandling()
{
	return mediumHandlingPct;
}

double Track::getCruiseSpeed()
{
	return cruiseSpeedPct;
}
