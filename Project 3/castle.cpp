#include "castle.h"

Castle::Castle()
{
   char castle[8][8];
}

void move(char move)
{ 
  switch (move)
    {
    case 'N':
        
        break;
    case 'S':
       
        break;
    case 'E':
       
        break;
    case 'W':
        
        break;
    case 'P':
        
        break;
    case 'C':
        
        break;
    default:
        throw std::invalid_argument("action is invalid");
        break;
    }

}

void status()
{

}