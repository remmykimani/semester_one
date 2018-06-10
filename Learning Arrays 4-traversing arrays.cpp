/*learned from https://youtu.be/Ot79Lw3PIGY */
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

double average(double array[], unsigned int size)
{
	double sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + array[i];
	}
	return(sum / size);
}


int main()
{
	double age[]={ 12,33,55,18,67 };
	cout << average(age, 5) << endl;

	system("pause");
	return 0;
}