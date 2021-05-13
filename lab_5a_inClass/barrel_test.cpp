#include <iostream>
#include "barrel.h"

int main(int argc, char const *argv[])
{
    Barrel<Pet*, 10> barrel;
    Pet* d{"Fido", "German Shepard"};
    Pet* c{"Whiskers", "Calico"};

    barrel.add(d);
    barrel.add(c);

    barrel.remove(d);

    while(!barrel.isEmpty())
    {
        Pet* p = barrel.remove();
        std::cout << p->speak() << std::endl;
    }

    return 0;

}