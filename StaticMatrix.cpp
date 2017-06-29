#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

const int colCount = 100,
    rowCount = 100;

// Function for dynamic array initializing 
int[colCount][rowCount] CreateStaticMatrix()
{
	int matrix[rowCount][colCount];

	// Populate matrix
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0;  j < colCount; j++)
		{
			matrix[i][j] = i + j;			
		}
	}

	return matrix;
}

int SumStaticMatrixDiagonalElements(int[colCount][rowCount] matrix)
{
    int sum = 0;

    for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0;  j < colCount; j++)
		{
            if (i == j)
            {
                sum += matrix[i][j];
            }			
		}
	}

    return sum;
}

int main()
{
    // Create static matrix
	int matrix[rowCount][colCount];

	// Populate matrix
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0;  j < colCount; j++)
		{
			matrix[i][j] = i + j;
			cout << "Matrix[" << i + 1 << "][" << j + 1 << "] = " << matrix[i][j] << endl;
		}
	}

	// Create static matrix with functions
    int matrix2[rowCount][colCount] = CreateStaticMatrix();

    // Sum elements of static matrix on diagonal
    int sum = SumStaticMatrixDiagonalElements(matrix2[rowCount][colCount]);

    cout << "Sum = " << sum << endl;

	system("pause");
	return 0;
}