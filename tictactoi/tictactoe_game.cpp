#include <iostream>
#include "tictactoe.h"
#include "my_includes.h"

bool playAgain();
void printGreeting();
std::string getPlayerName(const std::string);
void playGame(std::string, std::string);

int main()
{
    
    std::string player1;
    std::string player2;

    printGreeting();
    // output greeting 
    do
    {
        // get player names 
        player1 = getPlayerName("Enter the name of player one");
        player2 = getPlayerName("Enter the name of player two");
        
        // play game
        playGame(player1, player2);
    } while (playAgain());
    
    
    // prompt if play again
}

void printGreeting()
{
    std::cout << "Welcome to the game of TicTacToe\n\n";
}

bool playAgain()
{
    char choice;
    do
    {
        std::cout << "Would you like to play again (y/n): ";
        std::cin >> choice;
        clearInstream();
        choice = tolower(choice);

        if(choice == 'y' || choice == 'n')
            break;

        std::cout << "Invalid option! Try again.\n";
    } while (true);
    
    return (choice == 'y');
}

std::string getPlayerName(const std::string msg)
{
    std::string name; 

    std::cout << msg << std::endl << "Enter name: ";
    std::getline(std::cin, name);

    return name; 
}

void playGame(std::string player1, std::string player2)
{
    TicTacToe game; 
    size_t row, col;

    while (game.getStatus() == INPLAY)
    {
        // print grid 
        // ASK FOR VALID PLAYER ONE MOVE
        game.makeMove(X, row, col);
        game.printGameState();

        // ASK FOR VALID PLAYER TWO MOVE
        game.makeMove(O, row, col);
        game.printGameState();
    }

    
    
}
