//learned from https://youtu.be/tT6KJlPoORU

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <array>//mut be there everytime when creating arrays
using namespace std;

int main()
{
	array<double, 5>age;//new way to create arrays.NOTE SYNTAX

	age[0];//this is not nessesary aand can be excluded from the code
	age[1];
	age[2];
	age[3];
	age[4];

	for (unsigned int i = 0; i < age.size(); i++)//note the use of operator age.size to check the size of array and not declaring a static value just incase you increase the size of the array.
	{
		cout << "What are the ages? :";
		cin >> age[i];
	}
	for (unsigned int i = 0; i < age.size(); i++)//the unassigned int is to prevent the age.size from clashing withe the type of integer.
	{
		cout << age[i] << endl;
	}
	system("pause");
	return 0;
}