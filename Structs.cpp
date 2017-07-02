#include "stdafx.h"
#include <iostream>

using namespace std;

struct Student
{
	char* FirstName;
	char* LastName;
	char* PlaceOfBirth;
	float Age;
	float GPA;
};

Student CreateStudent(char* firstName, char* lastName, char* placeOfBirth, float age, float gpa)
{
	Student stud;

	stud.Age = age;
	stud.FirstName = firstName;
	stud.GPA = gpa;
	stud.LastName = lastName;
	stud.PlaceOfBirth = placeOfBirth;

	return stud;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Student students[2];

	students[0] = CreateStudent("Vasya", "Pupkin", "Miami", 19, 4);


	Student b;
	b.Age = 20;
	b.FirstName = "Bill";
	b.LastName = "Gates";
	b.GPA = 400000;
	b.PlaceOfBirth = "Redmont";

	students[1] = b;


	for (int i = 0; i < 2; i++)
	{
		Student stud = students[i];

		if (stud.GPA > 4)
		{
			cout << "Имя: " << stud.FirstName << endl;
			cout << "Фамилия: " << stud.LastName << endl;
			cout << "Возраст: " << stud.Age << endl;
			cout << "Успеваемость: " << stud.GPA << endl;
			cout << "Место рождения: " << stud.PlaceOfBirth << endl;
		}
	}

	system("pause");
	return 0;
}

