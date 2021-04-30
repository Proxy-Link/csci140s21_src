// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: uses a 2d array to dipslay number of times a sum occured in the correct row and column
// why: Lab 4a
// when: 4/18/21

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <array>
#include <iomanip>

using std::setw;

int main()
{

    int roll1, roll2; 

    const size_t arraySize{6};
    std::array<int, arraySize> xDir{0,0,0,0,0,0};
    std::array<std::array<int, arraySize>, arraySize> dieArr = {xDir, xDir, xDir, xDir , xDir, xDir};
  
    for (int i{0}; i < 360000; i++)
    {
        roll1 = rand() % (6) + 1;
        roll2 = rand() % (6) + 1;
        dieArr[roll1-1][roll2-1]++;
    }

    for(int j{0}; j<=6; j++)
    {
        if (j==0)
            std::cout << "     ";
        else 
            std::cout << j << "           ";
    }

    std::cout << std::endl; 

    for (int k{0}; k<6; k++)
    {
        std::cout << k + 1 << setw(10);
        for (int l{0}; l<6; l++)
        {
            std::cout << setw(8) << dieArr.at(k).at(l)<<setw(5)<<" ";
        }
        
        std::cout << std::endl;
    }
    

}