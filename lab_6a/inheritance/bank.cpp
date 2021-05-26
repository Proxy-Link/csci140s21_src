#include <iostream>

#include "account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

int main()
{
    Account account(500.0);
    SavingsAccount savings(44.0, .12);
    CheckingAccount checking(1000.0, 4.0);

    std::cout << "Initial Balance Available in Account: $ " << account.getBalance() << std::endl;
    std::cout << "Initial Balance Available in Savings: $ " << savings.getBalance() << std::endl;
    std::cout << "Initial Balance Available in Checking: $ " << checking.getBalance() << std::endl;

    std::cout << " $33 removed from Account balance:" << std::endl;
    account.debit(33.0);
    std::cout << "$20 removed from Savings balance:" << std::endl;
    savings.debit(20.0);
    std::cout << "$50 removed from Checking balance:" << std::endl;
    checking.debit(50.0);

    std::cout << "Balance Available in Account: $" << account.getBalance() << std::endl;
    std::cout << "Balance Available in Savings: $" << savings.getBalance() << std::endl;
    std::cout << "Balance Available in Checking: $" << checking.getBalance() << std::endl;

   
}