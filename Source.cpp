//Matt Straczek
//CSC 240-300

#include "Insurance.h"
#include "AutoInsurance.h"
#include "HomeInsurance.h"
#include <string>
#include <iomanip>
using namespace std;

//function prototypes
void userInputHome(HomeInsurance&);
void userInputAuto(AutoInsurance&);
void bannerDisplay(HomeInsurance&);
void totalDisplay(HomeInsurance&, HomeInsurance&, AutoInsurance&, AutoInsurance&);

int main()
{
	//object initialization
	HomeInsurance home2;
	AutoInsurance auto2;

	HomeInsurance home1(650.25, "Albert Anderson", "H-AA-67890", "1234 Alberts Drive", 25000.00, 100000.00);
	AutoInsurance auto1(425.50, "Albert Anderson", "A-AA-12345", 50000.00, 100000.00, "ABC12345XYZ");

	//user input for two objects
	userInputHome(home2);
	userInputAuto(auto2);

	//display information
	bannerDisplay(home1);
	cout << home1.toString();
	cout << auto1.toString();

	bannerDisplay(home2);
	cout << home2.toString();
	cout << auto2.toString();

	totalDisplay(home1, home2, auto1, auto2);

}

//function definitions
void userInputHome(HomeInsurance& obj)
{
	double home_premium, home_contents, home_liability;
	string home_name, home_policy_no, home_address;
	
	cout << "Enter the Annual Premium for your Home Insurance: " << endl;
	cin >> home_premium;
	obj.setPremium(home_premium);
	cin.ignore();

	cout << "Enter your Name: " << endl;
	getline(cin, home_name);
	obj.setName(home_name);

	cout << "Enter your Policy Number: " << endl;
	cin >> home_policy_no;
	obj.setPolicy(home_policy_no);
	cin.ignore();

	cout << "Enter your Location Address: " << endl;
	getline(cin, home_address);
	obj.setLocation(home_address);

	cout << "Enter your Contents Amount: " << endl;
	cin >> home_contents;
	obj.setContents(home_contents);

	cout << "Enter your Liability Amount: " << endl;
	cin >> home_liability;
	obj.setLiability(home_liability);
}

void userInputAuto(AutoInsurance& obj)
{
	double auto_premium, auto_collision, auto_liability;
	string auto_name, auto_policy_no, auto_vin;

	cout << "Enter the Annual Premium for your Auto Insurance: " << endl;
	cin >> auto_premium;
	obj.setPremium(auto_premium);
	cin.ignore();

	cout << "Enter your Name: " << endl;
	getline(cin, auto_name);
	obj.setName(auto_name);

	cout << "Enter your Policy Number: " << endl;
	cin >> auto_policy_no;
	obj.setPolicy(auto_policy_no);

	cout << "Enter your Collision Amount: " << endl;
	cin >> auto_collision;
	obj.setCollision(auto_collision);

	cout << "Enter your Liability Amount: " << endl;
	cin >> auto_liability;
	obj.setLiability(auto_liability);

	cout << "Enter your VIN Number: " << endl;
	cin >> auto_vin;
	obj.setVin(auto_vin);
}

void bannerDisplay(HomeInsurance& const obj)
{
	cout << endl << "----------------------------------------" << endl;
	cout << obj.getName() << "'s Home and Auto Policies" << endl;
	cout << "----------------------------------------" << endl;
}

void totalDisplay(HomeInsurance& const obj1, HomeInsurance& const obj2, AutoInsurance& const obj3, AutoInsurance& const obj4)
{
	cout << endl << "----------------------------------------" << endl;
	cout << "Total Annual Premiums: " << fixed << showpoint << setprecision(2) << obj1.getPremium() + obj2.getPremium() + obj3.getPremium() + obj4.getPremium() << endl;
	cout << "----------------------------------------" << endl;
}