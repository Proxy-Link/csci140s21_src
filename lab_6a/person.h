#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <sstream>
#include "address.h"
#include "phone.h"

class Person
{
    friend std::ostream& operator<<(std::ostream&, Person&); 

private:
    unsigned long ssn;
    std::string firstname;
    std::string middlename;
    std::string lastname;
    Address address;
    Phone phone;
    Phone mobile;
    std::string email;

public:
    Person(const std::string&, const std::string&, const std::string&, const Address&, const Phone&, const Phone&);
    Person(const Person&);
    std::string getFirstname() const;
    std::string getMiddlename() const;
    std::string getLastname() const;
    Address getAddress() const;
    Phone getPhone() const;
    Phone getMobile()const ;
    void setFirstname(const std::string&);
    void setMiddlename(const std::string&);
    void setLastname(const std::string&);
    void setAddress(const Phone&);
    void setPhone(const Phone&);
    void setMobile(const Phone&);
    void setEmail(const std::string&);
    std::string toString() const;
};

#endif