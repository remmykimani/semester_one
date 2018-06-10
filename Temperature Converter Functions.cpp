#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
double faren, celcius, input;
void celcius_faren(double value)
{
	faren = (input*1.8) + 32;
	if (faren < -459.6710018)
	{
		cout << "\nInvalid Temparature..Try Again!";
		//goto a;
	}
	cout << "The temparature is : " << faren << "  degrees farenheiht";
}

void faren_celcius(double value)
{
	celcius = (input - 32) / 1.8;
	cout << "The temparature is : " << celcius << "  degrees celcius";
}

int main()
{
	int choice;
	cout << "\n\n------Temparature Converter Program------\n\n"
		<< "Please enter the Value corresponding to your convertion\n\n"
		<< "1..Celcius to Farenheight\n"
		<< "2..Farenheight to Celciuis\n"
		<< "3..Exit App\n\n";
	cout << "My Choice is:";
	cin >> choice;
	if (choice == 1 || choice == 2)
	{

		cout << "\nWhat is the Temparature?";
		cin >> input;
	}
	switch (choice)
	{
	case 1:
	{
		celcius_faren(input);
		break;
	}
	case 2:
	{
		faren_celcius(input);
		break;
	}
	case 3:
	{exit(0); }
	default:
	{
		cout << "\nInvalid Value entered.Try again!";
		break;
		//goto a;
	}
	}
	system("pause");
	return 0;
}