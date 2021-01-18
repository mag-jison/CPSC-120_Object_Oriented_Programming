/*
Jason Duong
CPCS 121 -05
Assignment 7
*/

#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

class Counter {
private:
	int numberOfDatas, numberOfMethods;
public:
	void setDataMembers(int);
	void setMethods(int);
	int getDataMembers();
	int getMethods();
};

void Counter::setDataMembers(int d)
{
	numberOfDatas += d;
}

void Counter::setMethods(int m)
{
	numberOfMethods += m;
}

int Counter::getDataMembers()
{
	return numberOfDatas;
}

int Counter::getMethods()
{
	return numberOfMethods;
}

class Rectangle
{
private:
	double length, width;
public:
	void setLength(double);
	void setWidth(double);
	double getLength();
	double getWidth();
	double getArea();
};

void Rectangle::setLength(double l)
{
	length = l;
}

void Rectangle::setWidth(double w)
{
	width = w;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getArea()
{
	return (length * width);
}


int main()
{
	Rectangle box;
	Counter tally;
	double l;
	double w;
	cout << "What is the length of the rectangle: ";
	cin >> l;
	cout << "What is the width of the rectangle: ";
	cin >> w;
	box.setLength(l);
	tally.setDataMembers(1);
	box.setWidth(w);
	tally.setDataMembers(1);
	cout << endl;
	cout << "Length: " << box.getLength() << endl;
	tally.setMethods(1);
	cout << "Width: " << box.getWidth() << endl;
	tally.setMethods(1);
	cout << "Area: " << box.getArea() << endl;
	tally.setMethods(1);
	cout << "Number of Data Members: " << tally.getDataMembers() << endl;
	cout << "Number of Methods: " << tally.getMethods() << endl;
	return 0;
}
