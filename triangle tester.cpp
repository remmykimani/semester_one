//if statements

#include "stdafx.h"// what is this???,
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, z;
	cout << "WHART ARE THE SIDES OF THE TRIANGLE\n"
		<< "What is the height side\n";
	cin >> x;

	cout << "What is the base side\n";
	cin >> y;
	cout << "What is the hypotenuse side\n";
	cin >> z;

	if (x&&y&&z == x&&y&&z)
	{
		cout << "It is a equlateral triangle\n";
	}

	else
		if (x==y||x==z||y==z)

		{
			cout << "this is a isoceles triangle\n";
		}
	else
		if (x != y && x != z && y != z) {
			cout << "this is a scalene triangle\n";
		}

	if (x*x + y*y == z*z) {
		cout << "RIGHT TRIANGLE\n";
	}
	system("pause");
	return 0;
}