// iostream is only used for the operator<< function.
// Do not print anything directly to cout from this or any other class
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

#include "innocent.h"
#include "guard.h"
#include "indentured_guard.h"
#include "roving_guard.h"
#include "hunter_guard.h"

// this class does not provide UI no does it contain main. 
class Castle
{
    /** stream insertion operator overload */
    friend std::ostream& operator<<(std::ostream& out, const Castle& castle);  
    
public:
    /** castle constructor. Initializes the castle */ 
    Castle();

    /** move the position of the hero
     @ parameter move the direction in which the hero must move: must be a valid move
     @ throws invalid_argument exception if move is invalid */ 
    void move(char move);

    void status();

    /** Castle destructor. Deletes all heap based objects (including guards) */
    ~Castle(){}

private:
    std::vector<Guard*> guards;
    Innocent* hero;
    Innocent* wife;
};