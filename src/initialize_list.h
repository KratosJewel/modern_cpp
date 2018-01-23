#include <iostream>
#include <vector>
#include <map>
#include <array>
#include <string>

namespace InitializeList
{
    void Test()
    {
        bool bo {false};
        int in {5};
        std::string str {"test"};

        std::vector vec {5, 5, 5, 5}; // vec = vector<int> size:5

        std::map<int, double> m {{1, 8.8},
                                 {2, 8.8}}; // m = map<int, double> size:2

        std::array ar {1, 8}; // ar = array<int, 2>
    }
}