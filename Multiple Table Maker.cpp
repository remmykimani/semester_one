#include "stdafx.h"// what is this???
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])

{
	int number, range;
	cout << "THIS PROGRAM WILL CREATE MULTIPLE TABLES FOR YOU\n"
		<< "Enter the number you want\n";
	cin >> number;
	cout << "What is the range?\n";
	cin >> range;

	for(int i=0; i<=range; ++i)
	{
		cout << number << "x" << i << "=" << (number*i)<<"\n";
	}
	system("pause");
	return 0;


("pause");
return 0;

}
