#include "stdafx.h"
#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	a:
int sum,n;
sum=0;
b:
cout << "Enter the number\n";
cin>>n;

if (n<0||n==-0)
	{

	cout<<"Use a valid Number!!!!\n";
	goto b;
	}
else
{
	while (n > 0)
	{
		sum = sum + n;
		n--;
	}

	{
		
		cout << "Sum:" << sum << "\n";
	}
}
goto a;
system ("pause");
system("cls");
return 0;
}
