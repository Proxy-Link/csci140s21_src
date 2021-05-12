#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>
#include <sstream>

class Address
{
    friend std::ostream& operator<<(std::ostream&, Address&);  

private:
    std::string street1;
    std::string street2;
    std::string city;
    std::string state;
    std::string zip;

public:
    Address(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
    Address(Address&);
    std::string getStreet1() const;
    std::string getStreet2() const;
    std::string getCity() const;
    std::string getState() const;
    std::string getZip() const;
    std::string toString() const;
};

#endif