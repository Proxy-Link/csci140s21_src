#include "innocent.h"
#include <stdexcept>

Innocent::Innocent(const Position &pos, char type)
    : Person(pos, type) {}

void move(const char move)
{

    const char moves[]{'N', 'S', 'W', 'E', 'C', 'P'};

    char getInput()
    {
        return 'J';
    }

    bool isValid(char symbol)
    {
        for (int i = 0; i < sizeof(moves); ++i)
            if (symbol = moves[i])
                return true;

        return false;
    }
}
