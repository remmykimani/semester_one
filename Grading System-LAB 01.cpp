#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	float maths, english, kiswahili, science, religiousstudies;

	std::cout << "ENTER YOUR MARKS\n";
a:
	std::cout << "Enter Mathematics marks\n";
	std::cin >> maths;
	if (maths>100||maths<0) {
		std::cout << "INVALID MARK..ENTER MARKS AGAIN\n";
		goto a;
	}
b:
	std::cout << "Enter English marks\n";
	std::cin >> english;
	if (english>100||english<0) {
		std::cout << "INVALID MARK..ENTER MARKS AGAIN\n";
		goto b;
	}
c:
	std::cout << "Enter kiswahili marks\n";
	std::cin >> kiswahili;
	if (kiswahili>100||kiswahili<0) {
		std::cout << "INVALID MARK..ENTER MARKS AGAIN\n";
		goto c;
	}

d:
std::cout << "Enter Science marks\n";
std::cin >> science;
if (science>100||science<0) {
	std::cout << "INVALID MARK..ENTER MARKS AGAIN\n";
	goto d;
}
	
e:
	cout << "Enter Religious Studies marks\n";
	std::cin>> religiousstudies;
	if (religiousstudies>100||religiousstudies<0) {
		cout << "INVALID MARK..ENTER MARKS AGAIN\n";
		goto e;

	}

	cout << "MATHS|";
	cout << maths;

	//MATHEMATICS
	if (maths >= 70) {
		cout << "|A";
	}

	else if (maths >= 60) {
		cout << "|B";
	}

	else if (maths >= 50) {
		cout << "|C";
	}

	else if (maths >= 40) {
		cout << "|D";
	}
	else if (maths< 40) {
		cout << "|E";
	}


	if (maths >= 40)
	{
		cout << "|PASSED\n";
	}
	else
	{
		cout << "|FAILED!!!!\n";
	}

	//ENGLISH
	cout << "ENGLISH|";
	cout << english;
	if (english >= 70) {
		cout << "|A";
	}

	else if (english >= 60) {
		cout << "|B";
	}

	else if (english >= 50) {
		cout << "|C";
	}

	else if (english >= 40) {
		cout << "|D";
	}
	else if (english< 40) {
		cout << "|E";
	}

	if (english >= 40)
	{
		cout << "|PASSED\n";
	}
	else
	{
		cout << "|FAILED!!!!\n";
	}


	//KISWAHILI
	cout << "KISWAHILI|";
	cout << kiswahili;
	if (kiswahili >= 70) {
		cout << "|A";
	}

	else if (kiswahili >= 60) {
		cout << "|B";
	}

	else if (kiswahili >= 50) {
		cout << "|C";
	}

	else if (kiswahili >= 40) {
		cout << "|D";
	}
	else if (kiswahili< 40) {
		cout << "|E";
	}

	if (kiswahili >= 40)
	{
		cout << "|PASSED\n";
	}
	else
	{
		cout << "|FAILED!!!!\n";
	}

	//SCIENCE
	cout << "SCIENCE|";
	cout << science;
	if (science >= 70) {
		cout << "|A";
	}

	else if (science >= 60) {
		cout << "|B";
	}

	else if (science >= 50) {
		cout << "|C";
	}

	else if (science >= 40) {
		cout << "|D";
	}
	else if (science< 40) {
		cout << "|E";
	}

	if (science >= 40)
	{
		cout << "|PASSED\n";
	}
	else
	{
		cout << "|FAILED!!!!\n";
	}

	//RELIGIOUS STUDIES
	cout << "RELIGIOUS STUDIES|";
	cout << religiousstudies;

	if (religiousstudies >= 70) {
		cout << "|A";
	}

	else if (religiousstudies >= 60) {
		cout << "|B";
	}

	else if (religiousstudies >= 50) {
		cout << "|C";
	}

	else if (religiousstudies >= 40) {
		cout << "|D";
	}
	else if (religiousstudies< 40) {
		cout << "|E";
	}

	if (religiousstudies >= 40)
	{
		cout << "|PASSED\n";
	}
	else
	{
		cout << "|FAILED!!!!\n";
	}

	system("pause");
	return 0;


}
