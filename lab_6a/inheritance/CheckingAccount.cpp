#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double fee)
    : Account(balance) { this->fee; }
void CheckingAccount::credit(double amount)
{
    getBalance() - fee;
}

bool CheckingAccount::debit(double amount)
{
    if (debit(true))
        amount += fee;
}