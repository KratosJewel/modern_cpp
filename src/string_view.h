#include <iostream>
#include <string_view>

namespace StringView
{
    void Test()
    {
        constexpr std::string_view sv = "it is a test";
        std::cout << sv << std::endl;
    }
}