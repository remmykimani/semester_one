#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	int num1, num2, num3, max, min;

	cout << "What are the integers?\n";
a:
	cout << "integer 1?\n";
	cin >> num1;
	cout << "integer 2\n";
	cin >> num2;
	cout << "integer 3?\n";
	cin >> num3;


	if (num1 == num2 || num2 == num3 || num1 == num3)
	{
		cout << "Number repeated...enter values again!!!!\n";
		goto a;
	}

	max = num1;

	if (num2 > max)
	{max = num2; }

	if (num3 > max)
	{max = num3; }



	cout << "Then Max Value is:\n" << max<<"\n";

	system("pause");
	return 0;
}