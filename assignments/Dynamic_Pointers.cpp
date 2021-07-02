/*

Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores 
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order.
Another function should be called that calculates the average score. The program should display the sorted list of scores and averages with appropriate headings.
Use pointer notation rather than array notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.

*/

#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <cstdlib> //for exit() function
#include <stdlib.h>
#include <vector>

using namespace std;

double* sortArray(double* ptr);
double calculateScore(double* ptr, double);

int main()
{
	double scores;
	double total = 0.0;
	double testScores[10];
	cout << "Please enter non-negative test scores: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> scores;
		if (scores < 0.0)
		{
			cout << "Please restart the program and re-enter a valid test score." << endl;
			return 0;
		}
		testScores[i] = scores;
	}
	double* scoresptr = testScores;
	scoresptr = sortArray(scoresptr);
	
	cout << "List of Scores: {";
	for (int i = 0; i < 10; i++)
	{
		cout << scoresptr[i] << ", ";
	}
	cout << "}" << endl;
	cout << "Average of Scores: " << calculateScore(scoresptr, total);

	//delete[] scoresptr;
	return 0;
}

double* sortArray(double* scoresptr)
{
	double temp;
	for (int k = 0; k < 10; k++)
	{
		for (int j = k + 1; j < 10; j++)
		{
			if (*(scoresptr + j) < *(scoresptr + k)) {
				temp = *(scoresptr + j);
			}
		}
		*(scoresptr + k) = temp;
	}
	return scoresptr;
}

double calculateScore(double* scoresptr, double total)
{
	for (int c = 0; c < 10; c++)
	{
		total += *(scoresptr + c);
	}
	return total / 10;
}
