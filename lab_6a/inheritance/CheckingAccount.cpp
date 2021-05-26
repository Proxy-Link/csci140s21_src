#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double d, double fee)
    : Account(d), fee(fee) {}

void CheckingAccount::credit(double amount)
{
    Account::credit(amount + fee);
}

bool CheckingAccount::debit(double amount)
{
    return CheckingAccount::debit(amount + fee);
   
}

