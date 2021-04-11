#include <iostream>
#include "Account.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
  
  Account account1{1001, "Bob", "Biscotti", 150.00};
  Account account2{1002, "Alice", "Panitone", 1500.00};

  cout << account1.getfirstName() << " " << account1.getlastName() << " with account number " << 
  account1.getaccountNumber() << " has a balance of $" << account1.getBalance() << endl;

  cout << account2.getfirstName() << " " << account2.getlastName() << " with account number " << 
  account2.getaccountNumber() << " has a balance of $" << account2.getBalance() << endl;

}
