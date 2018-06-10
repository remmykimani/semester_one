#include "stdafx.h"
#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
   unsigned int numbers, num1, term1= 0, term2 = 1, next;
 a:
   cout << "\nEnter the Fib Number\n";
   cin >> numbers;

 
   numbers = numbers + 1;
    for ( num1 = 0 ; num1<numbers ; num1++ )
   {
      if ( num1 <= 1 )
         next = num1;
      else
      {
         next = term1 + term2;
         term1 = term2;
         term2= next;
      }
	  cout << next << ", ";
   }

	goto a;
	system("pause");
	system("cls");
	return 0;
}