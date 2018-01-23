#include <iostream>
#include <vector>
#include <array>
#include <map>

namespace For
{
    void Test()
    {
        std::vector vec{1, 2, 3, 4, 5}; // vec = vector<int>
        std::array arr{1, 2, 3, 4, 5, 6}; // arr = array<int,6>
        std::map<int, int> m{{1, 2},
                             {2, 1}};

        for (const auto &value : vec)
        {
            std::cout << value << std::endl;
        }

        for (const auto &value : arr)
        {
            std::cout << value << std::endl;
        }

        for (const auto &kv : m)
        {
            std::cout << kv.first << ":" << kv.second << std::endl;
        }

        for (const auto &
            [k, v] : m)
        {
            std::cout << k << ":" << v << std::endl;
        }
    }
}