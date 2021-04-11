#include <string>

class Account
{
public:
    explicit Account(int accountNumber, std::string firstName, std::string lastName,
                     double initialBalance)
        : accountNumber{accountNumber}, firstName{firstName}, lastName{lastName}, balance{initialBalance}
    {
        // validate that the initialBalance is greater than 0; if not,
        //  data member balance keeps its default initial value of 0
        if (initialBalance >= 0)
        {                             // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
        }
        if (accountNumber >= 0)
        {
            accountNumber = accountNumber;
        }
    }

    

    // function returns the account balance
    double getBalance() const
    {
        return balance;
    }

    void setaccountNumber(int accountNumber)
    {
        accountNumber = accountNumber;
    }

    int getaccountNumber() const
    {
        return accountNumber;
    }

    // function that sets the name
    void setfirstName(std::string firstName)
    {
        firstName = firstName;
    }

    void setlastName(std::string lastName)
    {
        lastName = lastName;
    }

    //function that returns the name
    std::string getfirstName() const
    {
        return firstName;
    }

    std::string getlastName() const
    {
        return lastName;
    }

private:
    std::string firstName; //acount name data member
    std::string lastName;
    double balance{0}; //data member with default initial value
    int accountNumber{0};
}; //end class Account