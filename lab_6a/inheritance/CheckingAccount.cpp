#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double fee)
    : Account(balance) 
    {
    
     }
void CheckingAccount::credit(double amount)
{
    getBalance() - fee;
}

bool CheckingAccount::debit(double amount)
{
    bool success = Account::debit(amount);    
    if(success)
        charge();
        return true;

    return false;

    
}