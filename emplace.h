#include <iostream>
#include <vector>

namespace Emplace
{
    void Test()
    {
        std::vector vec{1};

        vec.emplace_back(2);
        vec.emplace_back(3);
        vec.emplace_back(4);

        for (const auto &value : vec)
        {
            std::cout << value << std::endl;
        }
    }
}