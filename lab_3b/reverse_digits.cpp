// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: Takes a number between 1-9999 and reverse the order of the digits
// why: Lab 3b
// when: 4/11/21

#include <iostream> 

using std::cin;
using std::cout;
using std::endl;

int printReverseDigits(int num);

int printReverseDigits(int num)
{
    int reversed{0};
    while (num != 0)
    {
        reversed = reversed*10 + num%10;
        num = num/10;
    }   
    return reversed;
}

int main()
{
    int num;
    cout << "Enter a number between 1 and 9999: ";
    cin >> num;

    printReverseDigits(num);

    cout << "The number with its digits reversed is: " << printReverseDigits(num);

}