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

struct Company
{
	char* name;
	float income;
	struct Company *parent;
	struct Company *children[2];
	int childrenCount;

	// Constructor
	Company()
	{
		childrenCount = 0;
		name = "";
		income = 0.0;
		//children = new Company[2];
	}

	//~Company()
	//{
	//	delete[] children;
	//	// ?
	//	delete parent;
	//}
};

Company CreateCompany(char* name, float income, Company *parent)
{
	Company result;

	result.name = name;
	result.income = income;
	result.parent = parent;

	return result;
}

void AddChildTo(Company &parent, Company &child)
{
	if (parent.childrenCount < 2)
	{
		parent.childrenCount++;
		parent.children[parent.childrenCount - 1] = &child;
	}
}

//Company GetRoot(Company *node)
//{
//	Company result;
//
//	if (node->parent != NULL)
//	{
//		result = GetRoot(node->parent);
//	}
//	else 
//	{
//		return *node->parent;
//	}
//}

int main()
{
	int result = AddValue(0);
	cout << "Recursion result: " << result << endl;

	Company tree[6];
	tree[0] = CreateCompany("KBTU", 1000000, NULL);

	tree[1] = CreateCompany("IEIT", 10000000, &tree[0]);
	AddChildTo(tree[0], tree[1]);

	tree[2] = CreateCompany("KAZNITU", 1000000, &tree[0]);
	AddChildTo(tree[0], tree[2]);

	tree[3] = CreateCompany("Branch1.1", 1000, &tree[1]);
	AddChildTo(tree[1], tree[3]);

	tree[4] = CreateCompany("Branch1.2", 1000, &tree[1]);
	AddChildTo(tree[1], tree[4]);

	tree[5] = CreateCompany("Branch2.1", 1000, &tree[2]);
	AddChildTo(tree[2], tree[5]);

	int size = sizeof(tree) / sizeof(tree[0]);

	for (int i = 0; i < size; i++)
	{
		cout << "Name: " << tree[i].name << endl;
		cout << "Income: " << tree[i].income << endl;

		if (tree[i].parent != NULL)
		{
			cout << "Parent name: " << tree[i].parent->name << endl;
		}

		cout << "Children: " << endl;
		for (int j = 0; j < tree[i].childrenCount; j++)
		{
			cout << "Name: " << tree[i].children[j]->name << endl;
			cout << "Income: " << tree[i].children[j]->income << endl;
		}

		cout << endl;
	}

	// Recursion read
	//Company root = GetRoot(&tree[5]);
	//cout << "Root node: " << root.name << endl;

	system("pause");
	return 0;
}

