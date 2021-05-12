#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>

class Phone
{
    friend std::ostream& operator<<(std::ostream&, Phone&);    
    
private:
    std::string areacode;
    std::string prefix;
    std::string number;
    bool isNumber(const std::string&) const;

public:
    Phone(const std::string&, const std::string&, const std::string&);
    Phone(const Phone&);
    std::string getAreacode() const;
    std::string getPrefix() const;
    std::string getNumber() const;
    std::string toString() const;
};

#endif