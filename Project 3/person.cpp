#include "person.h"

Person::Person(const Position &pos, char type) 
    :  type() {}

Position nPos;

Position Person::getPosition() const
{
    return nPos; //i want this to return the position
}
char Person::getType() const
{ return type; }

bool Person::operator==(const Person &other) const
{ return (*this==other); }
bool Person::operator!=(const Person &other) const
{ return (*this != other); }

void Person::move(const Position &pos = nullptr)
{

} // should be pure virtual

