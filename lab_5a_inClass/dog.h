#ifndef DOG_H
#define DOG_H

#include <string> 
#include "pet.h"

class Dog : public Pet {
public: 
    Dog(std::string name, std::string breed)
     : Pet(name, "Dog"), breed{breed} {}
     
     std::string speak() const { return name + " the " + species + " says woof."; }

     void sit()
     {

     }

private:
    const std::string breed; 
};

#endif