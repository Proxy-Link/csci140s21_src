// Elias Magdaleno | emagdaleno8@student.mtsac.edu
// uses brute force to find all the pythagorean triples
// Lab 2b: Algorithms and Control Statement
// 3/28/21

#include <iostream>

using std::cout;
using std::endl;

void pyTripple()
{
    int side1{0};
    int side2{0};
    int side3{0};
    int total{0};
    int m{2};

    cout << "Side 1  Side 2  Side 3" << endl;

    while (side3 <= 500)
    {
        for (int n = 1; n < m; n++)
        {
            //I used Euclid's formula
            side1 = m * m - n * n;
            side2 = 2 * m * n;
            side3 = m * m + n * n;
            total++;  

            if (side3 > 500)
                break;

            cout << side1 << "\t" << side2 << "\t" << side3 << endl;
            
        }
        m++;     
    }
    //The total number of triples seems to be incorrect because the sides
    // do not incrementaly go up by one
    cout << "A total of " << total << " triples were found";
}

int main()
{
    pyTripple();
}