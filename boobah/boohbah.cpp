#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <iomanip>
#include "boobah.h"

using std::cout; 
//using std::cin;
using std::array;




int main()
{
    dungeon boo;
    boo.initDungeon();
    

   while(true)
   {
       
       boo.printDugeon();
       boo.userControls();
       //boo.clearScreen();
    
    

   }
    
    


}