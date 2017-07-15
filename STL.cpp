#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;
void main()
{
	string str;
	str = "Hello";

	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i] << endl;
	}

	str.append(" World");
	cout << str << endl;

	/*str.erase(0, 2);
	cout << str << endl;*/

	string substr = "o";
	for (int i = 0; i < str.length(); i++)
	{
		int found = str.find(substr);
		if (found > -1)
		{
			str.erase(found, substr.length());
		}
	}

	cout << str << endl;

	//str.erase(found, substr.length());
	//cout << str << endl;

	system("pause");
}

