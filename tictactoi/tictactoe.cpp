//
#include <stdexcept>
#include "tictactoe.h"

TicTacToe::TicTacToe()
{
    init();
}

void TicTacToe::init()
{
    currentStatus = INPLAY; 

    for (size_t i = 0; i < DIMENSION; ++i)
        for (size_t j = 0; j < DIMENSION; ++j)
            grid[i][j] = EMPTY;
    
}

void TicTacToe::reset()
{
    init();
}

void TicTacToe::makeMove(Players player, size_t row, size_t col)
{
    if(player == EMPTY || grid[row][col] != EMPTY
        || row < 0 || row >= DIMENSION || col < 0 || col >= DIMENSION)
        {
        throw std::invalid_argument("Illegeal Move");
        }

    grid[row][col] = player; 
}

void TicTacToe::updateStatus()
{
    bool rowWin;
    bool colWin;
    for(size_t row = 0; row < DIMENSION; ++row)
        {
            rowWin = true;
            colWin = true;

            for (size_t col = 0; col < DIMENSION; ++col)
            {
                if(grid[row][col] != grid[row][col+1])
                    {
                        rowWin = false;
                        continue;
                    }
            }

            if(rowWin)
                currentStatus = (grid[row][0] == X) ? WIN : LOST;

            for (size_t col = 0; col < DIMENSION; ++col)
                    {
                        if(grid[row][col] != grid[row][col+1])
                            {
                                colWin = false;
                                continue;
                            }
                    }

            if(colWin)
                currentStatus = (grid[row][0] == X) ? WIN : LOST;

            
            
        }
}

Status TicTacToe::getStatus() { return currentStatus; };