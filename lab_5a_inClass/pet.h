#ifndef PET_H
#define PET_H

#include <string>

class Pet
{
public:
    Pet(std::string name, std::string species)
    : name{name}, species{species} {}

    virtual std::string speak() const = 0;

    bool operator==(Pet* p) { return p->name == name && p->species == species; }

protected:
    std::string name;
    std::string species;

};

#endif