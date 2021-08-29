//Matt Straczek
//CSC 240-300

#include "HomeInsurance.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


//constructors
HomeInsurance::HomeInsurance() : Insurance(), locationAddress(" "), contentsAmount(0.0), liabilityAmount(0.0) {}


HomeInsurance::HomeInsurance(double premium, string name, string policy, string address, double contents, double liability) : Insurance(premium, name, policy), locationAddress(address), contentsAmount(contents), liabilityAmount(liability) {}


//accessors
string HomeInsurance::getLocation()
{
	return locationAddress;
}

double HomeInsurance::getContents()
{
	return contentsAmount;
}

double HomeInsurance::getLiability()
{
	return liabilityAmount;
}


//mutators
void HomeInsurance::setLocation(string address)
{
	locationAddress = address;
}

void HomeInsurance::setContents(double contents)
{
	contentsAmount = contents;
}

void HomeInsurance::setLiability(double liability)
{
	liabilityAmount = liability;
}


//toString
string HomeInsurance::toString()
{
	ostringstream strOut;

	strOut << endl << "Home Insurance" << endl << endl;
	strOut << Insurance::toString();
	strOut << endl << setw(20) << right << "Location Address: " << getLocation() << endl;
	strOut << setw(20) << right << "Contents Amount: " << fixed << showpoint << setprecision(2) << getContents() << endl;
	strOut << setw(20) << right << "Liability Amount: " << fixed << showpoint << setprecision(2) << getLiability() << endl << ends;

	return strOut.str();
}
