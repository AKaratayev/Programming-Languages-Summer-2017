#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

const int ArraySize = 10;


// Function for dynamic array initializing 
int[ArraySize] CreateStaticArray()
{
	int[ArraySize] arr;

	for (int i = 0; i < ArraySize; i++)
	{
		arr[i] = i + 10;
	}

	return arr;
}

// Function for static array elements summing
int StaticArraySumDiagonal(int[ArraySize] arr)
{
    int sum = 0;

    for (int i = 0; i < ArraySize; i++)
	{
        sum += arr[i];
	}

    return sum;
}

int main()
{
	// Static array
	int staticArray[100];
	// Print size of array in bytes
	cout << sizeof(staticArray) << endl;
	// Number of element in array
	int length = sizeof(staticArray) / sizeof(staticArray[0]);
	
	// Populate static array
	for (int i = 0; i < length; i++)
	{
		staticArray[i] = i + 10;
		//cout << staticArray[i] << endl;
	}

	// Create static array with function
	int[ArraySize] arr = CreateStaticArray();

    // Sum diagonal with function
    int sum = StaticArraySumDiagonal(arr);


	system("pause");
	return 0;
}

