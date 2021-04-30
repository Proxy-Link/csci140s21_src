// who: Elias Magdaleno | emagdaleno8@student.mtsac.edu
// what: rolls two die 360,000 times and prints the sums of the rolls and the probability of them
// why: Lab 4a
// when: 4/18/21

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <array>
#include <iomanip>

using std::setw;

int rollDie();

int rollDie()
{
    int roll1;
    int roll2;
    roll1 = rand() % (6) + 1;
    roll2 = rand() % (6) + 1;
    int rollSum = roll1 + roll2;
    return rollSum;
}

int main()
{
    const size_t arraySize{13};
    std::array<int, arraySize> tally{2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    std::array<float, arraySize> expected{0, 0, 2.778, 5.556, 8.333, 11.111, 13.889, 16.667, 13.889, 11.111, 8.333, 5.556, 2.778};

    for (int i{0}; i <= 360000; i++)
    {
        tally[rollDie()]++;
    }

    std::cout << "Sum" << setw(10) << "Total" << setw(10) << "Expected" << setw(10) << "Actual" << std::endl;

    for (int j{2}; j <= 12; ++j)
    {
        float actualPercent = 100.0 * ((float)tally.at(j) / (float)360000.0);

        std::cout << j << setw(10) << tally[j] << setw(10)
                  << expected.at(j) << "%" << setw(10) << std::fixed
                  << std::setprecision(3) << actualPercent << "%" << std::endl;
    }
}