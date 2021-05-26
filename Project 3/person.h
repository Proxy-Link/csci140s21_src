#include "position.h"

// is the base class and is abstract
class Person
{
public:
    Person(const Position& pos, char type);
    
    Position getPosition() const;
    char getType() const; 

    bool operator==(const Person& other) const;
    bool operator!=(const Person& other) const;

    virtual void move(const Position& pos = nullptr) = 0; // should be pure virtual
    
protected:
    Position pos;
    char type;

private:
    char heroPosition[0][0];
    
};