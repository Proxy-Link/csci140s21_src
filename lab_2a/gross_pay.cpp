// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: Takes input from user to find salary based on hours worked and overtime
// why: Lab 2a
// when: 3/21/21

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    double hoursWorked{};
    double hourlyRate{0};
    double salary{0};

    cout << "Enter hours worked (-1 to end): ";
    cin >> hoursWorked;

    while (hoursWorked != -1)
    {
        cout << "Enter hourly rate of the worker ($00.00): ";
        cin >> hourlyRate;
        if (hoursWorked <= 40)
        {
            salary = hoursWorked * hourlyRate;
        }
        else
        {
            salary = (40 * hourlyRate) + ((hoursWorked - 40) * (hourlyRate * 1.5));
        }

        cout << "Salary is $" << setprecision(2) << fixed << salary << endl;
        cout << "\n";

        cout << "Enter hours worked (-1 to end): ";
        cin >> hoursWorked;
    }
}
