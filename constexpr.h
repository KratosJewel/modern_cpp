#include <iostream>

namespace Constexpr
{
    void Test()
    {
        constexpr int cost = 1;
        //cost = 2; //error
    }
}