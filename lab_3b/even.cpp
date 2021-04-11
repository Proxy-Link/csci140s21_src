// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: Takes inputs from the user and tell output whether the integer was even or odd
// why: Lab 3b
// when: 4/11/21
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool even(int x);

bool even(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    while (true)
    {

        cout << "Enter an integer: ";
        cin >> x;

        if (even(x))
        {
            cout << x << " is an even integer" << endl;
        }
        else
        {
            cout << x << " is an odd integer" << endl;
        }
    }
}