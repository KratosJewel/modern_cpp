#include <iostream>
#include <vector>
#include <array>

namespace DeductionGuide
{
    void Test()
    {
        std::vector vec {1, 2, 3}; // vec = vector<int>
        std::pair p(1, 1.5); // p = pair<int, double>
        std::array ar {1, 2}; //ar = array<int, 2>
    }
}