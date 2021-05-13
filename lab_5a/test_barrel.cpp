#include "barrel.h"
#include <iostream>
#include <cassert>
#include <cstring>

int main()
{
    // declaring the Barrel instance
    Barrel<int, 5> barrel;

    unsigned short int controls;
    int item;
    std::cin >> controls;

    while (controls != 'x')
    {
        std::cout << "BARREL TEST!\n";
        std::cout << "1. Add item to barrel: \n";
        std::cout << "2. Remove item from barrel: \n";
        std::cout << "3. Remove one unspecified item from barrel: \n";
        std::cout << "4. Count the number of items in barrel: \n";
        std::cout << "5. Check barrel for a specific item: \n";
        std::cout << "6. Check if empty: \n";
        std::cout << "7. Check frequency of an item: \n";
        std::cout << "8. Clear all entries from barrel: \n";

   
        switch(controls)
        {
        case 1:
            std::cout << "Type item to add: \n";
            std::cin >> item;
            barrel.add(item);
            break;
        case 2:
            std::cout << "Type item to remove: \n";
            std::cin >> item;
            barrel.remove(item);
            break;
        case 3:
            std::cout << barrel.remove() << " removed\n";
            break;
        case 4:
            std::cout << barrel.count() << "item(s) in barrel\n";
            break;
        case 5:
            std::cout << "Type item to search for: \n";
            std::cin >> item;
            barrel.contains(item);
            break;
        case 6:
            if (barrel.isEmpty() == true)
                std::cout << "Barrel is not empty\n";
            else
                std::cout << "Barrel is empty";
            break;
        case 7:
            std::cout << "Type item to see frequency: \n";
            std::cin >> item;
            barrel.getFrequency(item);
            break;
        case 8:
            barrel.clear();
            break;
        default:
            std::cout << "Not a valid option \n";
            break;
        }
    }
}
