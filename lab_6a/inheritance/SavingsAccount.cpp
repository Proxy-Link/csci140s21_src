#include <stdexcept>
#include <SavingsAccount.h>

SavingsAccount::SavingsAccount(double balance, double interestRate)
    : Account(balance) { this->interestRate; }

double SavingsAccount::calculateInterest()
{
    return getBalance() * interestRate;
}