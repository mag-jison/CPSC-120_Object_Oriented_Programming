/*
Jason Duong
CPCS 121 -05
Assignment 8
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

class Car
{
private:
	int year, speed;
	string make;

public:
	Car()
	{
		year = year;
		make = make;
		speed = 0;
	}
	void setYear(int);
	void setMake(string);
	void setSpeed(int);
	int getYear();
	string getMake();
	int getSpeed();
	int getAccelerate();
	int getBrake();
};

void Car::setYear(int y)
{
	year = y;
}

void Car::setMake(string m)
{
	make = m;
}

void Car::setSpeed(int s)
{
	speed = s;
}

int Car::getYear()
{
	return year;
}

string Car::getMake()
{
	return make;
}

int Car::getSpeed()
{
	return speed;
}

int Car::getAccelerate()
{
	speed += speed + 5;
	return speed;
}

int Car::getBrake()
{
	speed -= speed - 5;
	return speed;
}

class Population
{
private:
	int population, births, deaths;
public:
	Population (int p, int b, int d)
	{
		if (p < 2)
		{
			p = 2;
		}

		if (d < 0 && b < 0)
		{
			d = 0;
			b = 0;
		}
	}
	void setPopulation(int);
	void setBirths(int);
	void setDeaths(int);
	int getPopulation();
	int getBirthRate();
	int getDeathRate();
};

void Population::setPopulation(int p)
{
	population = p;
}

void Population::setBirths(int b)
{
	births = b;
}

void Population::setDeaths(int d)
{
	deaths = d;
}

int Population::getBirthRate()
{
	return births / population;
}

int Population::getDeathRate()
{
	return deaths / population;
}

int Population::getPopulation()
{
	return population;
}


int main()
{
	Car vehicle;
	int time;
	string model;
	int speedUp;
	int speedDown;
	int pop;
	int birt;
	int dead;
	cout << "What year is your vehicle? ";
	cin >> time;
	vehicle.setYear(time);
	cout << "What make is your vehicle? ";
	cin >> model;
	vehicle.setMake(model);
	cout << "I'm in my " << vehicle.getYear() << " " << vehicle.getMake() << " " << endl;
	cout << "I'm accelerating ..." << endl << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Current speed: " << vehicle.getAccelerate() << " mph." << endl;
		cout << "Increasing Speed by: " << vehicle.getSpeed() << endl << endl;
	}
	cout << "Now I'm braking ..." << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Current speed: " << vehicle.getBrake() << " mph." << endl;
		cout << "Decreasing Speed by: " << vehicle.getSpeed() << endl << endl;
	}
	
	cout << endl;

	cout << "Enter total population: ";
	cin >> pop;
	cout << endl;
	cout << "Enter annual number of births: ";
	cin >> birt;
	cout << endl;
	cout << "Enter annual number of deaths: ";
	cin >> dead;
	Population density = Population(pop, birt, dead);
	density.setBirths(birt);
	density.setPopulation(pop);
	density.setDeaths(dead);
	cout << endl;
	cout << "Population Statistics" << endl;
	cout << "Population: " << density.getPopulation() << endl;
	cout << "Birth Rate: " << density.getBirthRate() << endl;
	cout << "Death Rate: " << density.getDeathRate() << endl;
	return 0;
}
