// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: takes two integers from the user and prints their greatest commond denominator 
// why: Lab 3b
// when: 4/11/21
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int gcd(int num1, int num2);

int gcd(int num1, int num2)
{
    while (num2 != 0)
    {
        int temp{num2};
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2; 
    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << gcd(num1, num2);
} 