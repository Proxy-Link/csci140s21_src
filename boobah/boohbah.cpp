#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <iomanip>
#include "boobah.h"

using std::cout; 
//using std::cin;
using std::array;

void playerControls();


int main()
{
   unsigned short int h, w; 
    boobah boo;
    cout << "enter the height and width for the dungeon: ";
    std::cin >> boo.generateDungeon(h,w);
    
    


}