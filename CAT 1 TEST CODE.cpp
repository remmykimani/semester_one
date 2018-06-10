#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x, y, z;

	cout << "Enter the values X,Y,Z\n";
	cin >> x >> y >> z;
	//if
	if (x > y)
	{
		if (x > z)
		{
			cout << fixed << setprecision(1) << (float)x << setw(2) << "Value X is max\n";
		}
		else
		{
			cout << fixed << setprecision(1) << (float)z << setw(2) << "Value Z is max\n";
		}
	}
	else if (y > z)
	{
		cout << fixed << setprecision(1) << (float)y<< setw(2) << "Value Y is max\n";
	}

	else
	{
		cout << fixed << setprecision(1) << (float)z << setw(2) << "Value Z is max\n";
	}
	
	system("pause");
	system("cls");
	main();
	return 0;
}