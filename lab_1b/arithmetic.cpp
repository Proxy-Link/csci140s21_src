// Elias Magdaleno | emagdaleno8@student.mtsac.edu
// take user input and use math functions to display new values or the largest/smallest value
// Lab 1b: Basic Flow Control
// 3/7/21

#include <iostream>
#include <math.h>

int main()
{
    int userNum, userNum2, userNum3;
    int sum;
    int avg;
    int product;
    int sumSquare;
    int squareSum;
    int small;
    int large;

    std::cout << "Input three different integers: ";
    std::cin >> userNum >> userNum2 >> userNum3;

    sum = userNum + userNum2 + userNum3;
    avg = sum / 3;
    product = userNum * userNum2 * userNum3;
    sumSquare = pow(userNum, 2) + pow(userNum2, 2) + pow(userNum3, 2);
    squareSum = pow(sum, 2);

    large = userNum;
    if (userNum < userNum2)
    {
        large = userNum2;
    }
    else if (userNum < userNum3)
    {
        large = userNum3;
    }

    small = userNum;
    if (userNum > userNum2)
    {
        small = userNum2;
    }
    else if (userNum > userNum3)
    {
        small = userNum3;
    }

    std::cout << "Sum is " << sum << std::endl;
    std::cout << "Average is " << avg << std::endl;
    std::cout << "Product is " << product << std::endl;
    std::cout << "Sum of squares is " << sumSquare << std::endl;
    std::cout << "Square of their sum is " << squareSum << std::endl;
    std::cout << "Smallest is " << small << std::endl;
    std::cout << "Largest  is " << large << std::endl;

    return 0;
} 