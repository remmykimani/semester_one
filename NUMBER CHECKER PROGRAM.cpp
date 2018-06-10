# include "stdafx.h"
# include <iostream>
#include<iomanip>
# include <string>
using namespace std;

int main()
{ 
string users;
int n;
int i;
cout<<" NUMBER CHECKER PROGRAM\n"
    <<"Who are you?\n"
    <<"You are:";
getline(cin, users);
system("cls");
cout << "OK!  ";cout<< users << "  Welcome!\n\n";


a:
cout << "\nEnter The Number to check\n ";
b:
cout << "Number:";
cin >> n;
if(n<0)
{
    cout<<"Invalid Number Entered...Use positive values!\n";
    goto b;
}

if (n == -0)
{
	cout << "Not prime and even";
}

else
{
	//prime number checker
	bool prime = true;
	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			prime = false;
			break;
		}
	}
	if (prime)
		cout << "Prime";
	else
		cout << "Not Prime ";



	//even vs odd
	if (n % 2 == 0)
	{
		cout << " and even.\n";
	}
	else
	{
		cout << " and odd.\n";
	}

}
goto a;
    

system ("pause");
return 0;
}