#include "indentured_guard.h"
#include <stdlib.h>
#include <time.h>

IndenturedGuard::IndenturedGuard(const Position& pos)
    : {}


void move(const char move = 'A') 
{
    int moveChance;
    srand(time(NULL));
    moveChance = rand()% 100 + 1;
    if(moveChance >= 15)
    {
        //implement move in rand direction
    }

}