//Matt Straczek
//CSC 240-300
#pragma once

#include <iostream>
using namespace std;


class Insurance
{
private:
	double annualPremium;
	string nameOfInsured;
	string policyNumber;

public:
	Insurance();
	Insurance(double, string, string);
	
	double getPremium();
	string getName();
	string getPolicy();

	void setPremium(double);
	void setName(string);
	void setPolicy(string);

	string toString();
};