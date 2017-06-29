#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

// Function for dynamic array initializing 
int** CreateDynamicMatrix(int rowCnt, int colCnt)
{
    // Create Dynamic matrix, double pointer    
	int** matrix = new int*[rowCnt];
	for (int i = 0; i < rowCnt; i++)
	{
		matrix[i] = new int[colCnt];
	}

    // Populate matrix
	for (int i = 0; i < rowCnt; i++)
	
		for (int j = 0;  j < colCnt; j++)
		{
			matrix[i][j] = i + j;
		}
	}

	return matrix;
}

int SumDynamicMatrixDiagonalElements(int** matrixPointer, int rowCnt, int colCnt)
{
    int sum = 0;

    for (int i = 0; i < rowCnt; i++)
	{
		for (int j = 0;  j < colCnt; j++)
		{
            if (i == j)
            {
                sum += matrixPointer[i][j];
            }			
		}
	}

    return sum;
}

int main()
{
    int rowCount = 0,
        colCount = 0;

	cin >> rowCount;
    cin >> colCount;

    // Create Dynamic matrix, double pointer    
	int** matrix = new int*[rowCount];
	for (int i = 0; i < rowCount; i++)
	{
		matrix[i] = new int[colCount];
	}

	// Populate matrix
	for (int i = 0; i < rowCount; i++)
	
		for (int j = 0;  j < colCount; j++)
		{
			matrix[i][j] = i + j;
			cout << "Matrix[" << i + 1 << "][" << j + 1 << "] = " << matrix[i][j] << endl;
		}
	}

    // Clean memory
	for (int i = 0; i < rowCount; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;


    // Create dynamic matrix with function
    int** matrix2 = CreateDynamicMatrix(rowCount, colCount); 

    // Sum elements of dynamic matrix on diagonal
    int sum = SumDynamicMatrixDiagonalElements(matrix2, rowCount, colCount);

    cout << "Sum = " << sum << endl;

	// Clean memory
	for (int i = 0; i < rowCount; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	
	system("pause");
	return 0;
}

