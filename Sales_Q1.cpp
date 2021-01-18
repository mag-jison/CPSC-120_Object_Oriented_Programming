/*
Jason Duong
CPSC 121 -05
Assignment Lab Exercise (Function)
*/

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip> 

using namespace std;

double calculateRetail(double wholeSalePrice, double markUpPercent);

int main()
{
	double wholeSalePrice, markUpPercent, total;

	cout << "Please enter an item's wholesale price (e.g. 235): $";
	cin >> wholeSalePrice;
	while (wholeSalePrice < 0.0)
	{
		cout << "Sale Price cannot be a negative number." << endl;
		cout << "Again, please enter an item's wholesale price (e.g. 235): $";
		cin >> wholeSalePrice;
	}
	cout << "" << endl;
	cout << "Plase enter the item's markup percent (e.g. 50): ";
	cin >> markUpPercent;
	total = calculateRetail(wholeSalePrice, markUpPercent);
	cout << "" << endl;
	cout << "$" << fixed << showpoint << setprecision(2) << total << endl;
	return 0;
}
double calculateRetail(double wholeSalePrice, double markUpPercent)
{
	return wholeSalePrice + (wholeSalePrice * (markUpPercent / 100));
}

