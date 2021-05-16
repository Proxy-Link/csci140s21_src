#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class SavingsAccount : public Account {

public: 
    SavingsAccount(double balance, double interestRate)
        : Account(balance){ this->interestRate;}

    double calculateInterest();
    void credit(double amount);
    bool debit(double amount);

    /**
       @return the the amount of interest earned by the account */
    double SavingsAccount::calculateInterest()
    {
       return getBalance() * interestRate;
    }

    void SavingsAccount::credit(double amount)
    {
       double interestRate = calculateInterest();
       getBalance() + amount + interestRate;
    }

    bool SavingsAccount::debit(double amount)
    {
        if(amount <= getBalance())
            getBalance() += amount;
            return true;

        
    }

private:
    double interestRate;

};

#endif
