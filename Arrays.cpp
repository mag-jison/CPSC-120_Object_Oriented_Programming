/*
Jason Duong
CPCS 121 -05
Assignment 6
*/

#include <iostream>
#include <string>

using namespace std;

int countPerfect(int k) {
	int counter = 0;
	if (k == 100)
		counter++;
	return counter;
}
int main()
{
	const int ISIZE = 20;
	int total = 0;
	int numGrade;
	int testScores[ISIZE];
	cout << "Please enter 20 test scores: ";
	for (int i = 0; i < ISIZE; i++)
	{
		cin >> numGrade;
		testScores[i] = numGrade;
		total += countPerfect(testScores[i]);
	}
	cout << "The number of perfect scores: " << total << endl;
	return 0;
}
