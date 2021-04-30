// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: uses a 2d array to dipslay number of times a sum occured in the correct row and column
// why: Lab 4a
// when: 4/21/21

#include <iostream>
#include <iomanip>
#include "die.h"
#include "my_includes.h"



void initSumFreqs(double freqs[], size_t size)
{
    for (size_t i = 1; 1 <= 6; ++i)

        for (size_t j = 0; j <= 6; ++j)
        ++(freqs[i+j]);

    for (size_t i = 0; i < size; i++)
        freqs[i] = freqs[i] / 36 * 100;
    

   
}

int main()
{
    const size_t SIZE{13};
    const size_t TEST_QTY{36'000};
    Die d1{6};
    Die d2{6};
    unsigned int sumCount[SIZE]{0};
    double sumFreq[SIZE]{};

    initSumFreqs(sumFreq, SIZE);
    
    for (size_t i = 0; i < TEST_QTY; ++i)
    {
        d1.rollDie();
        d2.rollDie();
        ++sumCount[d1.getFace() + d2.getFace()];
    }


    std::cout << std::fixed << std::setprecision(3);
    for (size_t i = 2; i < SIZE; ++i)
    {
        std::cout << i << " " <<  (double)sumCount[i] / TEST_QTY * 100 << "%\n"; 
    }
    
    

    return 0;
}