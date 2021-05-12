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
    size_t numItems{0};

public:
    /** Gets the current number of entries in this barrel.
        @return The integer number of entries currently in the barrel. */
    size_t count()
    {
        return numItems;
    }

    /** Sees whether this barrel is empty.
        @return True if the barrel is empty, or false if not. */
    bool isEmpty()
    {
        return count() == 0;
    }

    /** Adds a new item to this barrel.
        @param item The object to be added as a new item.
        @throws runtime_error if the barrel is full */
    void add(T item)
    {
        if (!(count() < N))
        {
            throw std::runtime_error("barrel is full");
        }
        array[numItems] = item;
        ++numItems;
    }

    /** Removes one unspecified item from this barrel, if possible.
        @return the removed item or
        @throws runtime_error if the barrel was empty. */
    T remove()
    {
        if (isEmpty())
        {
            throw std::runtime_error("barrel is already empty");
        }
        T item = array[numItems - 1];
        --numItems;
        return item;
    }

    /** Removes one occurrence of a given item from this barrel.
        @param item The item to be removed. 
        @return True if the removal was successful, or false otherwise. */
    bool remove(T item)
    {

        size_t index = -1;
        for (size_t i = 0; i < numItems; ++i)
        {
            if (array[i] == item)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            return false;
        }
        else
        {
            return true;
        }

        ++index;

        while (index < numItems)
        {
            array[index - 1] = array[index];
            ++index;
        }

        --index;
        array[index] = static_cast<T>(NULL);
        --numItems;
    }

    /** Removes all entries from this barrel. sets the used elements to NULL */
    void clear()
    {
        for (size_t i = 0; i < numItems; ++i)
        {
            array[i] = static_cast<T>(NULL);
        }
        numItems = 0;
    }

    /** Counts the number of times a given item appears in this barrel.
        @param item The item to be counted.
        @return The number of times item appears in the barrel. */
    size_t getFrequency(T item)
    {
        size_t frequency{0};

        for (size_t i = 0; i < numItems; ++i)
        {
            if (array[i] == item)
            {
                ++frequency;
            }
        }

        return frequency;
    }

    /** Tests whether this barrel contains a given item.
        @param item The item to locate.
        @return True if the barrel contains item, or false otherwise */
    bool contains(T item)
    {
        for (size_t i = 0; i < numItems; ++i)
        {
            if (array[i] == item)
            {
                return true;
            }
        }
        return false;
    }
};

#endif // ends include guard