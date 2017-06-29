#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

// Function for dynamic array initializing 
int* CreateDynamicArray(int size)
{
	int* arrayPointer = new int[size];

	for (int i = 0; i < size; i++)
	{
		arrayPointer[i] = i + 10;
	}

	return arrayPointer;
}

// Function for dynamic array element summing
int DynamicArraySumDiagonal(int* arrayPointer)
{
    int sum = 0;

    int length = sizeof(arrayPointer) / sizeof(arrayPointer[0]);
    for (int i = 0; i < length; i++)
	{
        sum += arrayPointer[i];
	}

    return sum;
}

int main()
{
    // Set size of dynamic array
	int length = 0;
	cin >> length;

    // Create dynamic array
    int* arrayPointer = new int[length];
	for (int i = 0; i < length; i++)
	{
		arrayPointer[i] = i + 10;
	}

    // Release memory
    delete[] arrayPointer;

	// Create dynamic array with function
	int* arrayPointer2 = CreateDynamicArray(length); 
    
    // Sum diagonal with function
    int sum = DynamicArraySumDiagonal(arrayPointer2);

    cout << "Sum = " << sum << endl;

    // Delete after all operations will be completed
	delete[] arrayPointer2;


	system("pause");
	return 0;
}

