// Elias Magdaleno | emagdaleno8@student.mtsac.edu
// Print out a pattern of asterisks using for loops and nested loops
// Lab 2b: Algorithms and Control Statement
// 3/28/21
#include <iostream>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << " " << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i <= 10; i++)
    {
        for (int k = 0; k < 10 - i; k++)
        {
            std::cout << "*";
        }
        std::cout << " " << std::endl;
    }

    std::cout << std::endl;

    for (int i = 10; i >= 1; i--)
    {
        for (int k = 10-i; k > 0; k--)
        
            std::cout <<" ";
        
        for (int j = i; j > 0; j--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i <= 10; i++)
    {
        for (int k = 0; k < 10 - i; k++)
        {
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
