#include <iostream> 
#include <cmath>

using namespace std;

void f1();


int main()
{
    cout << "Before call to f1.\n";
    f1();
    cout << "After\n";
}

void f1()
{
    cout << "during\n";
}