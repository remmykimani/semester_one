#include "stdafx.h"
#include<iostream>
#include <iomanip>
#include <string>

using namespace std;

int input;

int evencheck(int number)//check if number is even or odd
{
	if (number % 2 == 0)
	{
		cout << " and even.\n";
	}
	else
	{
		cout << " and odd.\n";
	}
	return number;
}

int primecheck(int number)//prime number checking funnction

{
	int i;
	bool prime = true;
	for (i = 2; i <= number / 2; ++i)
	{
		if (number % i == 0)
		{
			prime = false;
			break;
		}
	}
	if (prime)
		cout << "true";
	else
		cout << "false";
	return number;
}
int main()
{
	do
	{
		cout << "\nEnter The Number to check\n ";
	b:
		cout << "Number:";
		cin >> input;
		if (input < 0)
		{
			cout << "Invalid Number Entered...Use positive values!\n";
			goto b;
		}

		if (input == -0)
		{
			cout << "Not prime and even";
		}

		else
		{
			primecheck(input);
			evencheck(input);
		}
	}
	while (true);

system("pause");
return 0;
}