#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <array>

using namespace std;

int main()
{
    int number=5;
    cout<<&number<<endl;//this showss the 

    int *numberpointer;
    numberpointer=&number;
    cout<<numberpointer<<endl;

    system("pause");
    return 0;
    
}