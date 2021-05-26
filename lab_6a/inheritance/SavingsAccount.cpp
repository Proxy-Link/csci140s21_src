#include <stdexcept>
#include <SavingsAccount.h>

SavingsAccount::SavingsAccount(double d, double interestRate)
    : Account(d) 
    { 
      if(interestRate >= 0.0)
      {
      this->interestRate = interestRate; 
      }
      else 
      {
          throw std::invalid_argument("rate is not valid");
      }
    }

double SavingsAccount::calculateInterest()
{
    return getBalance() * interestRate;
}