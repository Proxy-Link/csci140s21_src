#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "account.h"

class CheckingAccount : public Account
{

public:
    /** constructor initializes balance and fee
      @parameter: takes in initial balance & fee */
    CheckingAccount(double d, double fee);

    /** add amount and charge fee to the balance
      @parameter: amount added to account */
    void credit(double amount);

    /** subtracts amount and charges fee to account
      @parameter: amount to be subtraced from account
      @return: true if money is withdrawn in order to charge fee
      @throws: out_of_range exception if amount withdrawn is more than in the balance  */
    bool debit(double amount);

private:
    double fee;
    void chargeAccount();
};

#endif