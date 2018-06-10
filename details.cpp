//if statements

#include "stdafx.h"// what is this???,
#include <iostream>
#include <string>
//#include <date.h> //this is for date
using namespace std;

int main()
{
string firstname, lastname,adm;
char gender [6];//the 6 is to limit values

	cout << "INPUT YOUR DETAILS\n"
		<< "What is your first name?\n";
	cin >> firstname;

	cout << "What is your last name?\n";
	cin >> lastname;

	cout << "what is your admission number?\n";
	cin >> adm;

	cout << "What is your gender?\n"
		<< "Please use M to rep male and F to rep female\n";
	cin >> gender;

	cout << "Name:\t" << firstname<<" " << lastname << "\n"
		<< "ADM NO:\t" << adm << "\n"
		<< "Gender:\t" << gender << "\n"
	    << "Date:\t"<< __DATE__<<"\n";// THIS IS FOR DATE
	    
		

	system("pause");
		return 0;


}