//
#include <stdexcept>
#include <iostream>
#include <iomanip>
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
    bool isRowWin;
    bool isColWin;
    for(size_t row = 0; row < DIMENSION; ++row)
        {
            isRowWin = true;
            isColWin = true;

            for (size_t col = 0; col < DIMENSION; ++col)
            {
                if(grid[row][col] != grid[row][col+1])
                    {
                        isRowWin = false;
                        continue;
                    }
            }

            if(isRowWin)
                currentStatus = (grid[row][0] == X) ? WIN : LOST;

            for (size_t col = 0; col < DIMENSION; ++col)
                    {
                        if(grid[row][col] != grid[row][col+1])
                            {
                                isColWin = false;
                                continue;
                            }
                    }

            if(isColWin)
                currentStatus = (grid[row][0] == X) ? WIN : LOST;

            
            
        }
}

Status TicTacToe::getStatus() { return currentStatus; };

void TicTacToe::printGameState()
{
    for (size_t row = 0; row < DIMENSION; ++row)
    {
        std::cout << grid[row][0];
        for (size_t col = 1; col < DIMENSION; ++col)
        
          std::cout << " | " << grid[row][col];
        
        if(row < DIMENSION - 1)
            std::cout << "\n----------\n";
        else 
            std::cout << std::endl;
    }
    

}