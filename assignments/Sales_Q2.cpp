/*
Jason Duong
CPSC 121 -05
Assignment Lab Exercise (Function) Q2
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	double totalNE, totalNW, totalSE, totalSW;
	
	totalNE = getSales("Northeast");
	totalNW = getSales("Northwest");
	totalSE = getSales("Southeast");
	totalSW = getSales("Southwest");

	findHighest(totalNE, totalNW, totalSE, totalSW);
	return 0;
}
double getSales(string name)
{
		double total;
		cout << "What is the " << name << " quarterly sales figure (e.g. 2053): " << endl;
		cin >> total;
		while (total < 0.0)
		{
			cout << "Sales cannot be negative." << endl;
			cout << "Again, what is the " << name << " quarterly sales figure (e.g. 2053): ";
			cin >> total;
		}
			return total;
}

void findHighest(double nE, double nW, double sE, double sW)
{
	double total = nE;
	string name = "Northeast";

	if (total < nW)
	{
		total = nW;
		name = "Northwest";
	}	
	if (total < sE)
	{
		total = sE;
		name = "Southeast";
	}
	if (total < sW)
	{
		total = sW;
		name = "Southwest";
	}
	
	cout << "The Highest Grossing Division is : " << name << endl;
	cout << " The Sales Figure: $" << fixed << showpoint << setprecision(2) << total;
}
