#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <array>

using namespace std;
int main()
{
	int age;
	vector<int>memory;
	
	for (int x = 0; x < 5; x++)
	{
		cin >> age ;
		memory.push_back(age);
	}

	for (int x = 0; x < memory.size(); x++)
	{
		cout <<memory.at(x)<< endl;
		
	}

	system("pause");
	return 0;
}