#ifndef CAT_H
#define CAT_H

#include <string>
#include "pet.h"

class Cat : public Pet {
public:
    Cat(std::string name, std::string breed)
        : Pet(name, "Cat"), breed{breed} {}

    std::string speak() const override { return name + " the " + species + " says meow.";}

private:
    const std::string breed;
};

#endif