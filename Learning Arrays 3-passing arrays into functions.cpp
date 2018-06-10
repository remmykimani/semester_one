#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

void print_array(double array[], unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}

void userinput_array(double array[], unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "What are the ages? :";
		cin >> array[i];
	}
}

int main()
{
	double age[5];
	userinput_array(age, 5);
	print_array(age, 5);
	system("pause");
	return 0;
}