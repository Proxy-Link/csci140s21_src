// who: <your name and Mt SAC username goes here>
// what: <the function of this program>
// why: <the name of the lab>
// when: <the due date of this lab.>

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stddef.h>
#include <stdexcept>

/** The base class for all accounts types*/
class Account {
public:
   /** constructor initializes balance
       @parameter: initialBalance The initial balance of the account. Must be a non-negative value
       @throws invalid_argument exception if initialBalance is out of range */
   explicit Account(double balance)
   {
       if(!(balance > 0.0))
           balance = 0.0;
           throw std::runtime_error("Balance is too low");
        balance = balance;
   }
   
   /** Add an amount to the account balance
       @parameter: amount Amount that gets added to the account */
   virtual void credit(double amount) { amount += balance; } 

   /** Subtract an amount from the balance
       @parameter: amount The amount to be subtracted from the account 
       @return: true if the deduction was successful or false otherwise
       @throws out_of_range exception If the amount is greater than the current balance */
   virtual bool debit(double amount)
   {
       if(amount <= balance)
            balance -= amount;
            return true;
        return false;
            throw std::runtime_error("Amount attempted to be withdraw is less than amount available");
   }

   /** Return the account balance
       @return: the current account balance */
   double getBalance() { return this->balance; }

private:
   double balance; // data member that stores the balance
   double amount;
}; 

#endif

