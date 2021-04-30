/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
using namespace std;



int main ()
{
    int array[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int i=0; i< 3; i++)
        
        for(int j = 0; j<3; j++)
        
            cout << array[i][j];
}
