// who: Elias Magdaleno || emagdaleno8@student.mtsac.edu
// what: using inheritance to represent bank accounts 
// why: Lab 6a
// when: 3/16/21

#ifndef ACCOUNT_H
#define ACCOUNT_H


/** The base class for all accounts types*/
class Account {
public:
   /** constructor initializes balance
       @parameter: initialBalance The initial balance of the account. Must be a non-negative value
       @throws invalid_argument exception if initialBalance is out of range */
   explicit Account(double balance);

   
   /** Add an amount to the account balance
       @parameter: amount Amount that gets added to the account */
   virtual void credit(double amount);

   /** Subtract an amount from the balance
       @parameter: amount The amount to be subtracted from the account 
       @return: true if the deduction was successful or false otherwise
       @throws out_of_range exception If the amount is greater than the current balance */
   virtual bool debit(double amount);

   /** Return the account balance
       @return: the current account balance */
   double getBalance();

private:
   double balance; // data member that stores the balance

protected:
   double amount;
}; 

#endif

