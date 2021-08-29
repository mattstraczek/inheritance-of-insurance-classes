//Matt Straczek
//CSC 240-300
#pragma once

#include "Insurance.h"

class AutoInsurance : public Insurance
{
private:
	double collisionAmount;
	double liabilityAmount;
	string vinNumber;

public:
	AutoInsurance();
	AutoInsurance(double, string, string, double, double, string);

	double getCollision();
	double getLiability();
	string getVin();

	void setCollision(double);
	void setLiability(double);
	void setVin(string);

	string toString();
};