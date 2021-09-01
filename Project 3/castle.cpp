#include "castle.h"

Castle::Castle()
{
   
}

void move(char move)
{ 
    
    size_t x = 0; size_t y = 0;
  switch (move)
    {
    case 'N':
    if(x > 0)
      &hero->pos();  Position(x, y+1);
        break;
    case 'S':
       Position(x,y-1);
        break;
    case 'E':
       Position(x+1,y);
        break;
    case 'W':
        Position(x-1, y);
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

