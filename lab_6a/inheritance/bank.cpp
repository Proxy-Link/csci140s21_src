#include <iostream>

#include "account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

int main(int argc, char const *argv[])
{
    Account account(500.0);
    SavingsAccount savings(25.0, .03);
    CheckingAccount checking(80.0, 1.0);

    std::cout << account.getBalance() << std::endl;
    std::cout << savings.getBalance() << std::endl;
    std::cout << checking.getBalance() << std::endl;


   
    



}