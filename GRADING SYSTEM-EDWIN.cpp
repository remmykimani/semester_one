// labone.cpp : Defines the entry point for the console application.
//EDWINN WALELA
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


//function

// return-type name ( data-type identifier)
string gradeFactory(float mark){
	if(mark >100){
		return "Error";
	}else if(mark > 70){
		return " |A| ";
	}else if(mark > 60){
		return " |B| ";
	}else if(mark > 50){
		return " |C| ";
	}else if(mark > 40){
		return " |D| ";
	}else if(mark > 0){
		return " |E| ";
	}else{
		return " Error ";
	}
};


string verdictFactory(float mark){
	if(mark >100 || mark < 0){
		return " Error ";
	}
	else if(mark >=40){
	return " Pass ";;
	}else{
		return " Fail ";
	}

};

int main()
{
	//declare variables
	float math,english,kiswahili,science,religious_studies;
	//input marks
a:
	cout<<"enter math mark: \a";
	cin>>math;
	if(math>100||math<0)
	{
		cout << "INVALID MARK ENTERED...ENTER MARKS AGAIN!!\n";
		goto a;
	}
b:
	cout<<"enter english mark: \a";
	cin>>english;

	if (english > 100 || english < 0) {
		cout << "INVALID MARK ENTERED...ENTER MARKS AGAIN!!\n";
		goto b;
	}

c:
	cout<<"enter kiswahili mark: \a";
	cin>>kiswahili;
	if (kiswahili > 100 || kiswahili < 0) {
		cout << "INVALID MARK ENTERED...ENTER MARKS AGAIN!!\n";
		goto c;
	}

d:
	cout<<"enter science mark: \a";
	cin>>science;
	if (science > 100 || science < 0) {
		cout << "INVALID MARK ENTERED...ENTER MARKS AGAIN!!\n";
		goto d;
	}
e:
	cout<<"enter religious studies mark: \a";
	cin>>religious_studies;
	if (religious_studies > 100 || religious_studies < 0) {
		cout << "INVALID MARK ENTERED...ENTER MARKS AGAIN!!\n";
		goto e;
	}
	//
	system("pause");
	cout<<"------------ RESULTS TABLE ----------\n";
	cout<<"Mathematics      | "<<math<< gradeFactory(math)<<" | "<<verdictFactory(math)<<endl;
	cout<<"English          | "<<english<< gradeFactory(english)<<" | "<<verdictFactory(english)<<endl;
	cout<<"Kiswahili        | "<<kiswahili<< gradeFactory(kiswahili)<<" | "<<verdictFactory(kiswahili)<<endl;
	cout<<"Science          | "<<science<< gradeFactory(science)<<" | "<<verdictFactory(science)<<endl;
	cout<<"Religious studies| "<<religious_studies<< gradeFactory(religious_studies)<<" |"<<verdictFactory(religious_studies)<<endl;

	system("pause");
	return 0;
}
