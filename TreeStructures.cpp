// TreeStructures.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int AddValue(int value)
{
	int val = ++value;

	//int result = val;
	if (val < 10)
	{
		AddValue(val);
	}
	else 
	{
		return val;
	}

	//return result;
}

int main()
{
	int result = AddValue(0);

	cout << "Recursion result: " << result << endl;

	system("pause");
	return 0;
}

