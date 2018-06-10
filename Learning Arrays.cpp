/* Learned from https://youtu.be/ZLk7qV9wEDw */
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
	double age[5];

	age[0];
	age[1];
	age[2];
	age[3];
	age[4];

    for(int i=0;i<5;i++)
    {
		cout << "What are the ages? :";
		cin >> age[i];
    }
	for (int i = 0; i<5; i++)
	{
		cout << age[i] << endl;
	}
	system("pause");
	return 0;
}