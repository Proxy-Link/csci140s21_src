// Elias Magdaleno | emagdaleno8@student.mtsac.edu
//by taking the user's input and a random number generator play a modified version of rock paper scissors using functions 
//Lab Exam 1 - Project 1
//4/4/2021 
#include <iostream>
#include <climits>
#include <ctime>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void gameRules();
int getRandomValue();
int inputValidate(char move);
void turn(char move);
void rock(char move);
void paper(char move);
void scissors(char move);
void lizard(char move);
void spock(char move);


void gameRules()
{
    cout << "Welecome to Rock-Paper-Scissors-Lizard-Spock\n";
    cout << "Game Rules: \n";
    cout << "The game is an expansion on the game Rock, Paper, Scissors.\n";
    cout << "Each player picks an object and reveals it at the same time using hand gestures to replicate a rock, paper, or scissors.\n";
    cout << "The winner is the one who defeats the other. In a draw (tie), the game is declared a draw and another game is played.\n";
}

int inputValidate(char move)
{
    switch (move)
    {
    case 'R':
    case 'P':
    case 'S':
    case 'L':
    case 'K':       
    }

    return 0;
}

void userInput()
{
    char move;
    cout << "Enter the letter of your choice: ";
    cin >> move;
    int c = 0;
    while (c = 0)
    {
        if (inputValidate(move))
        {
            c++;
            break;
        }
        else
        {
            cout << "bad option\n";
        }
    }

    turn(move);
}

int getRandomValue()
{
    int randVal{0};
    std::srand(std::time(0));
    randVal = rand() % (5 - 1) + 1;
    return randVal;
}

void turn(char move)
{
    int computerPlay = getRandomValue();
    switch (computerPlay)
    {
    case 1:
        rock(move);
        break;
    case 2:
        paper(move);
        break;
    case 3:
        scissors(move);
        break;
    case 4:
        lizard(move);
        break;
    case 5:
        spock(move);
        break;
    }
}

void rock(char move)
{
    switch (move)
    {
    case 'R':
    case 'r':
        cout << "You chose Rock the computer chose Rock\n";
        cout << "Draw!\n";
        break;
    case 'P':
    case 'p':
        cout << "You chose Paper the computer chose Rock\n";
        cout << "Paper covers rock\n";
        cout << "You win!\n";
        break;
    case 'S':
    case 's':
        cout << "You chose Scissors the computer chose Rock\n";
        cout << "Rock crushes scissors\n";
        cout << "You lose!\n";
        break;
    case 'L':
    case 'l':
        cout << "You chose Lizard the computer chose Rock\n";
        cout << "Rock crushes liazard\n";
        cout << "You lose!\n";
        break;
    case 'K':
    case 'k':
        cout << "You chose Spock the computer chose Rock\n";
        cout << "Spock vaporizes rock\n";
        cout << "You win!\n";
        break;
    }
}

void paper(char move)
{
    switch (move)
    {
    case 'R':
    case 'r':
        cout << "You chose Rock the computer chose Paper\n";
        cout << "Paper covers rock\n";
        cout << "You lose!\n";
        break;
    case 'P':
    case 'p':
        cout << "You chose Paper the computer chose Paper\n";
        cout << "Draw!\n";
        break;
    case 'S':
    case 's':
        cout << "You chose Scissors the computer chose Paper\n";
        cout << "Scissors cut paper\n";
        cout << "You win!\n";
        break;
    case 'L':
    case 'l':
        cout << "You chose Lizard the computer chose Paper\n";
        cout << "Lizard eats paper\n";
        cout << "You win!\n";
        break;
    case 'K':
    case 'k':
        cout << "You chose Spock the computer chose Paper\n";
        cout << "Paper disproves Spock\n";
        cout << "You lose!\n";
        break;
    }
}

void scissors(char move)
{
    switch (move)
    {
    case 'R':
    case 'r':
        cout << "You chose Rock the computer chose Scissors\n";
        cout << "Rock crushes scissors\n";
        cout << "You win!\n";
        break;
    case 'P':
    case 'p':
        cout << "You chouse Paper the computer chose Scissors\n";
        cout << "Scissors cut paper\n";
        cout << "You lose!\n";
        break;
    case 'S':
    case 's':
        cout << "You chouse Scissors the computer chose Scissors\n";
        cout << "Scissors cut paper\n";
        cout << "You lose!\n";
        break;
    case 'L':
    case 'l':
        cout << "You chouse Lizard the computer chose Scissors\n";
        cout << "Scissors decapitates lizard\n";
        cout << "You lose!\n";
        break;
    case 'K':
    case 'k':
        cout << "You chouse Spock the computer chose Scissors\n";
        cout << "Spock smashes scissors\n";
        cout << "You win!\n";
        break;
    }
}

void lizard(char move)
{
    switch (move)
    {
    case 'R':
    case 'r':
        cout << "You chouse Rock the computer chose Lizard\n";
        cout << "Rock crushes lizard\n";
        cout << "You win!\n";
        break;
    case 'P':
    case 'p':
        cout << "You chouse Paper the computer chose Lizard\n";
        cout << "Lizard eats paper\n";
        cout << "You lose!\n";
        break;
    case 'S':
    case 's':
        cout << "You chouse Scissors the computer chose Lizard\n";
        cout << "Scissors decapitates lizard\n";
        cout << "You win!\n";
        break;
    case 'L':
    case 'l':
        cout << "You chouse Lizard the computer chose Lizard\n";
        cout << "Draw!\n";
        break;
    case 'K':
    case 'k':
        cout << "You chouse Spock the computer chose Lizard\n";
        cout << "Lizard poisons Spock\n";
        cout << "You lose!\n";
        break;
    }
}

void spock(char move)
{
    switch (move)
    {
    case 'R':
    case 'r':
        cout << "You chouse Rock the computer chose Spock\n";
        cout << "Spock vaporizes rock\n";
        cout << "You lose!\n";
        break;
    case 'P':
    case 'p':
        cout << "You chouse Paper the computer chose Spock\n";
        cout << "Paper disproves Spock\n";
        cout << "You lose!\n";
    case 'S':
    case 's':
        cout << "You chouse Scissors the computer chose Spock\n";
        cout << "Spock smashes scissors\n";
        cout << "You win!\n";
        break;
    case 'L':
    case 'l':
        cout << "You chouse Lizard the computer chose Spock\n";
        cout << "Lizard poisons Spock\n";
        cout << "You lose!\n";
        break;
    case 'K':
    case 'k':
        cout << "You chouse Spock the computer chose Spock\n";
        cout << "Draw!\n";
        break;
    }
}

void clear_instream()
{
    cin.clear();

    cin.ignore(INT_MAX, '\n');
}

int main()
{
    gameRules();
    char move;
    cout << "Would you like to play Rock-Paper-Scissors-Lizard-Spock? (y/n): ";
    cin >> move;
    clear_instream();
    do
    {
    if (move == 'Y' || move == 'y')
    {
        cout << "\t(R)ock\n";
        cout << "\t(P)aper\n";
        cout << "\t(S)cissors\n";
        cout << "\t(L)izard\n";
        cout << "\t(S)pock\n";
        userInput();
        clear_instream();
    }
    else if (move == 'N' || move == 'n')
    {
        exit(0);
    }
    else 
    {
        cout << "bad option";
    }
    cout << "Play again? (y/n): ";
    cin >> move;
    }
    while( move == 'Y' || move == 'y');

    
}
