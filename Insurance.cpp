//Matt Straczek
//CSC 240-300

#include "Insurance.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


//constructors
Insurance::Insurance() : annualPremium(0.0), nameOfInsured(" "), policyNumber(" ") {}

Insurance::Insurance(double premium, string name, string policy) : annualPremium(premium), nameOfInsured(name), policyNumber(policy) {}


//accessors
double Insurance::getPremium()
{
	return annualPremium;
}

string Insurance::getName()
{
	return nameOfInsured;
}

string Insurance::getPolicy()
{
	return policyNumber;
}


//mutators
void Insurance::setPremium(double premium)
{
	annualPremium = premium;
}

void Insurance::setName(string name)
{
	nameOfInsured = name;
}

void Insurance::setPolicy(string policy)
{
	policyNumber = policy;
}


//toString
string Insurance::toString()
{
	ostringstream strOut;

	strOut << setw(20) << right << "Annual Premium: " << fixed << showpoint << setprecision(2) <<  getPremium() << endl;
	strOut << setw(20) << right << "Name of Insured: " << getName() << endl;
	strOut << setw(20) << right << "Policy Number: " << getPolicy() << endl << ends;

	return strOut.str();
}