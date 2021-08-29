//Matt Straczek
//CSC 240-300

#include "AutoInsurance.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


//constructors
AutoInsurance::AutoInsurance() : Insurance(), collisionAmount(0.0), liabilityAmount(0.0), vinNumber(" ") {}

AutoInsurance::AutoInsurance(double premium, string name, string policy, double collision, double liability, string vin) : Insurance(premium, name, policy), collisionAmount(collision), liabilityAmount(liability), vinNumber(vin) {}


//accessors
double AutoInsurance::getCollision()
{
	return collisionAmount;
}

double AutoInsurance::getLiability()
{
	return liabilityAmount;
}

string AutoInsurance::getVin()
{
	return vinNumber;
}


//mutators
void AutoInsurance::setCollision(double collision)
{
	collisionAmount = collision;
}

void AutoInsurance::setLiability(double liability)
{
	liabilityAmount = liability;
}

void AutoInsurance::setVin(string vin)
{
	vinNumber = vin;
}


//toString
string AutoInsurance::toString()
{
	ostringstream strOut;

	strOut << endl << "Auto Insurance" << endl << endl;
	strOut << Insurance::toString();
	strOut << endl << setw(20) << right << "Collision Amount: " << fixed << showpoint << setprecision(2) << getCollision() << endl;
	strOut << setw(20) << right << "Liability Amount: " << fixed << showpoint << setprecision(2) << getLiability() << endl;
	strOut << setw(20) << right << "VIN Number: " << getVin() << endl << ends;

	return strOut.str();
}