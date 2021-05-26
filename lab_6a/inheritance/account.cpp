#include <stdexcept>
#include "account.h"

Account::Account(double balance)
{
    if (balance >= 0.0)
        {
            this->balance = 0.0;
        }

    else
    {
        throw std::invalid_argument("Balance is too low");
    }
}

void Account::credit(double amount) { balance += amount; }

bool Account::debit(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        return true;
    }
    else 
    {
        throw std::out_of_range("Amount attempted to be withdraw is less than amount available");
        return false;
    }

    
}

double Account::getBalance()
{
    return balance;
}