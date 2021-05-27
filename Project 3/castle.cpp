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


/*
const char moves[] {'N', 'S', 'W', 'E', 'C', 'P'};

char getInput()
{
    return 'J';
}

bool isValid(char symbol)
{
    for (int i =0; i < sizeof(moves); ++i)
        if(symbol = moves[i])
            return true;

    return false;
}

int main(int argc, char const *argv[])

{
    char input = getInput();
    return 0;
}
*/