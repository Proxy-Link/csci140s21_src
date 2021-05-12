// who: <your name and Mt SAC username goes here>
// what: <the function of this program>
// why: <the name of the lab>
// when: <the due date of this lab.>

// include guard
#ifndef BARREL_H
#define BARREL_H

// includes (only include headers from the std library)
#include <stddef.h>
#include <stdexcept>

/*  Templated barrel collection
    typename T where T is the type stored in the collection
    size_t N where N is the maximum amount of items the barrel can hold */
template <typename T, size_t N>
class Barrel
{
private:
    // data members go here
    static T array[N];

public: 
    /** Gets the current number of entries in this barrel.
        @return The integer number of entries currently in the barrel. */
    size_t count();

    /** Sees whether this barrel is empty.
        @return True if the barrel is empty, or false if not. */
    bool isEmpty();

    /** Adds a new item to this barrel.
        @param item The object to be added as a new item.
        @throws runtime_error if the barrel is full */
    void add(T item);

    /** Removes one unspecified item from this barrel, if possible.
        @return the removed item or
        @throws runtime_error if the barrel was empty. */
    T remove();

    /** Removes one occurrence of a given item from this barrel.
        @param item The item to be removed. 
        @return True if the removal was successful, or false otherwise. */
    bool remove(T item);

    /** Removes all entries from this barrel. sets the used elements to NULL */
    void clear();

    /** Counts the number of times a given item appears in this barrel.
        @param item The item to be counted.
        @return The number of times item appears in the barrel. */
    size_t getFrequency(T item);

    /** Tests whether this barrel contains a given item.
        @param item The item to locate.
        @return True if the barrel contains item, or false otherwise */
    bool contains(T item);
};

#endif // ends include guard