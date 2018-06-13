#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <array>

using namespace std;

int main()
{
    string adm[2][3]={{22,33,44},{54,89,68}//row then columns...each set of curly brackets reps a row of values

/*22,33,44
 54,89,68*/

 cout<<adm[0][1]<<endl;//this will cout 33

 for(int row=0;row<2;row++){
    for(int coulumn=0;column<3;column++){
        cout<<adm[row][column]<<"  ";
    }
    cout<<endl;
}
system ("pause");
return 0;

}