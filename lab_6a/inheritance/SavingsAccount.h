#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class SavingsAccount : public Account
{

public:
    /** constructor initializes balance & interest
      @parameter: recieves initial balance and value 
      for initial value for interest rate 
      @throw: invalid_arguement exception if rate is not greater than 0*/
    SavingsAccount(double d, double interestRate);

    /** calculate interest rate
        @return: value of balance times interest */
    double calculateInterest();

private:
    double interestRate;
};

#endif
        