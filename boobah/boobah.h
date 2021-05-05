#include <iostream>
#include <array>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class boobah
{
private:
   unsigned short int h;
   unsigned short int w;
public:

   void generateDungeon(unsigned short int height, unsigned short int width)
   {
       int dungeon[w][h];

       for (size_t i = 0; i < w; ++i)
       {
           cout << "-----";
           for (size_t j = 0; j< h; ++j)
           {
               cout << "|" << endl;
               cout << "|" << endl;
           }
           
       }
       

   }
   
   void setHeight(int height)
   {
       int h = height;
   }
   
   void setWidth(int width)
   {
       int w = width;
   }

   int getHeight()
   {
       return h;
   }

   int getWidth()
   {
       return w;
   }
};



