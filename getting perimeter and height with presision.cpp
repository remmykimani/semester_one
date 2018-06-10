//if statements

#include "stdafx.h"// what is this???,
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>//stet pressision
//#include <date.h> //this is for date
using namespace std;

int main()
{
	float base, height, hypotenuse, area, perimeter;
	cout << "INPUT THE VALUES\n"
		<< "What is the Base?\n";
	cin >> base;

	cout << "What is the height\n?";
	cin >> height;

	cout << "What is the hypotenuse?\n";
	cin >> hypotenuse;
	area = (0.5*base*height);

	perimeter = (base + hypotenuse + height);


	cout << fixed << setprecision(2);//this is to round off to two decimal places
	cout<< "The area of the triangle is:\t" << area << "\n"
		<< "the perimeter of the triangle is:\t" << perimeter << "\n";



	system("pause");
		return 0;
