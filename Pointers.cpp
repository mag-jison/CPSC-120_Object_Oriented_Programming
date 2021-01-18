/*
Jason Duong
CPCS 121 -05
Assignment 10
*/

#include <iostream>

using namespace std;

double median (int *ptr, int size)
{
    if (size % 2 == 0){
        cout << (*(ptr + (size / 2) - 1) + *(ptr + (size / 2)));
	    return (*(ptr + (size / 2) - 1) + *(ptr + (size / 2))) / 2.0;
    }
    else
        return *(ptr + (size / 2));
}

void printArray (int *ptrtwo, int sizetwo)
{
	for (int i = 0; i < sizetwo; i++)
	{
		cout << ptrtwo[i] << " ";
	}
}

int main()
{
	int odd [] = {1, 2, 3, 4, 5, 6, 7};
	int even [] = {1, 2, 3, 4, 5, 6, 7, 8};
	cout << "Median of Array, { ";
	printArray(odd, 7);
	cout << "}\nis " << median(odd, 7) << endl;
	cout << "Median of Array, { ";
	printArray(even, 8);
	cout << "}\nis " << median(even, 8) << endl;

	return 0;
}
