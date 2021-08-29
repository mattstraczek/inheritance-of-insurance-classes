//Matt Straczek
//CSC 240-300
#pragma once

#include "Insurance.h"

class HomeInsurance : public Insurance
{
private:
	string locationAddress;
	double contentsAmount;
	double liabilityAmount;

public:
	HomeInsurance();
	HomeInsurance(double, string, string, string, double, double);

	string getLocation();
	double getContents();
	double getLiability();

	void setLocation(string);
	void setContents(double);
	void setLiability(double);

	string toString();
};