#include "stdafx.h"// what is this???
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])

{

    int maths,chemistry,biology,physics,computer,sum,average;
	
		
    cout<<"CALCULATING YOUR AVERAGE MARKS"
        <<"Enter Mathematics marks\n";
	cin>>maths;
	
	cout<<"Enter Chemistry marks\n";
	cin>>chemistry;
	
	cout<<"Enter Biology marks\n";
	cin>>biology;
	
	cout<<"Enter Physics marks\n";
	cin>>physics;
	
	cout<<"Enter Computer marks\n";
	cin>>computer;
	

	sum=(maths+chemistry+biology+physics+computer);
	average=(sum/5);;
	cout<<"Average mark is=  "<<average <<endl;
	
	
	if (average>=90){
		cout<<"Grade A\n";
	}
	
	else if (average>=80){
		cout<<"Grade B\n";
	}
	
	else if (average>=70){
		cout<<"Grade C\n";
	}
	
	else if (average>=60){
		cout<<"Grade D\n";
	}
	
	else if (average>=40){
		cout<<"Grade E\n";
	}
	
	else if (average<40){
		cout<<"Grade F\n";
	}

if(average>=40)
{cout<<"YOU HAVE PASSED!!!";}

else{cout<<"You have failed!!!";}

	
	
	system ("pause");
	return 0;
	
}
