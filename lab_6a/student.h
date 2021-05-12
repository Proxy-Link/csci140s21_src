#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <sstream>
#include "person.h"

class Student : public Person
{
    friend std::ostream& operator<<(std::ostream&, Student&);  

private:
    unsigned long studentId;
    std::string username;

public:
    Student(const Person&, const unsigned long&, const std::string&);
    Student(const Student&);
    unsigned long getStudentId() const;
    std::string getUsername() const;
    void setStudentId(const unsigned long&);
    void setUserName(const std::string&);
    std::string toString() const;
};

#endif