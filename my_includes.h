
#include <iostream>
#include <string>
#include <climits> // for INT_MAX
#include <cstdlib>
#include <ctime>

template <typename T>
T getUserInput(const std::string &prompt)
{
    T input{};
    std::cout << prompt;
    std::cin >> input;

    return input;
}

void clearInstream()
{
    std::cin.clear();
    //wrong input remains on the stream, so you need to get rid of it
    std::cin.ignore(INT_MAX, '\n');
}

char toLower(char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z')
               ? symbol - 'A' + 'a'
               : symbol;
}

int randRange(const unsigned int &start, const unsigned int &end)
{
    int scalingFactor = end - start + 1;
    return rand() % scalingFactor + start;
}
void seedRandRange(unsigned int seed = time(NULL))
{
    srand(seed);
}

template<typename T, size_t N>
void printArray(T array, std::string& delim)
{
    std::cout << array[0];
    for (size_t i = 1; i < N; ++i)
        std::cout << delim << array[i];
    
    
}