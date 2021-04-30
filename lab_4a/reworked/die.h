#include <cstddef>
#include <cstdlib>
#include <ctime> 

#ifndef DIE_H
#define DIE_H

class Die
{
private:
    const size_t faceCount;
    int face{};
public:
    Die(size_t faceCount) : faceCount{faceCount} 
    {
        std::srand(std::time(NULL));
        rollDie();
        
    }

    int getFace() { return face; };
    
    void rollDie()
    {
        face = rand() % faceCount + 1;
    }

};

#endif