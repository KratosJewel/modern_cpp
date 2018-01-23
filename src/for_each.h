#include <iostream>
#include <vector>

namespace ForEach
{
    void Test()
    {
        std::vector vec{1, 2, 3, 4, 5, 6, 7, 8}; // vec = vector<int>

        std::for_each(vec.cbegin(), vec.cend(), [](const int &index)
        {
            std::cout << index << std::endl;
        });
    }
}