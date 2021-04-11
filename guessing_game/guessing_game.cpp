/*
The computer picks at random a number between 1 and 100 inclusive
    called "secret"
greet the user (welcome)

prompt the user to guess the number
    returns "guess"
if the user guesses correctly, report success and exit the game
if the user guesses a lower value than the computer's number
    we report "too low guess again."
if the user guesses a higher value than the computer's number
    we report "too high guess again."
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

void printGreeting();
int getRandomValue(int min, int max); 
int getInput(std::string prompt);
void printResult(int secret, int guess);

int main()
{
   int secret{getRandomValue(1, 101)};
   int guess{0};

   printGreeting();

   do
   {
       guess = getInput("Enter guess: ");
       printResult(secret, guess);
   } while (guess != secret);
}

void printGreeting()
{
    std::cout << "Welcome to the number guessing game. \n";
    std::cout << "I'm thinking of a number from 1 to 100 \n";
    std::cout << "Can you guess the number?\n";
}
//displays prompt and returns user input
int getInput(std::string prompt)
{
    int guess{0};
    std::cout << prompt;
    std::cin >> guess;
    return guess;
}
// generates n such that min <= n < max
int getRandomValue(int min, int max)
{
    int rndValue{0};
    std::srand(std::time(0));
    rndValue = rand() % (max - min) + min;
    return rndValue;
    
}

void printResult(int secret, int guess)
{
    if(guess < secret)
        std::cout << "Your guess is too low, guess again\n";
    else if(guess > secret)
        std::cout << "Your guess is too high, guess again\n";
    else
        std::cout << "Correct..well done!\n";
}