#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT_H

#include "account.h"

class CheckingAccount : public Account{

public:
    CheckingAccount(double balance, double fee)
        : Account(balance) { this->fee; }
    void CheckingAccount::credit(double amount)
    {
        getBalance() - fee;
    }

    bool CheckingAccount::debit(double amount)
    {
        if(debit(true))
            amount += fee;
    }
private:
    double fee;

};

#endif 