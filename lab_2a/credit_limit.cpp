// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: Takes inputs from user to find if they went over their credit limit if not then their new balance
// why: Lab 2a
// when: 3/21/2

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    int accountNumber{};
    double beginningBalance{0};
    double totalCharge{0};
    double totalCredits{0};
    double creditLimit{0};

    cout << "Enter account number (-1 to end): ";
    cin >> accountNumber;
    while (accountNumber != -1)
    {

        cout << setprecision(2);
        cout << fixed;

        cout << "Enter beginning balance: ";
        cin >> beginningBalance;
        cout << "Enter total charges: ";
        cin >> totalCharge;
        cout << "Enter total credits: ";
        cin >> totalCredits;
        cout << "Enter credit limit: ";
        cin >> creditLimit;

        double newBalance = beginningBalance + totalCharge - totalCredits;
        cout << "New balance is " << newBalance << endl;

        if (newBalance > creditLimit)
        {

            cout << "Account: " << accountNumber << endl;
            cout << "Credit limit: " << creditLimit << endl;
            cout << "Balance: " << newBalance << endl;
            cout << "Credit Limit Exceeded." << endl;
        }
        cout << "Enter account number (-1 to end): ";
        cin >> accountNumber;
    }
}
